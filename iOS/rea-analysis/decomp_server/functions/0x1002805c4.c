// rea decompile_all
// name: FUN_1002805c4
// address: 0x1002805c4
// body: available
// range: 0x1002805c4-0x1002806db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002805c4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar1 = 0;
  local_68 = param_1;
  __ss17CodingUserInfoKeyVMa();
  lVar8 = *(long *)(lVar1 + -8);
  puVar5 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) ==
      0) {
    uVar7 = 0;
  }
  else {
    lVar6 = *(long *)(lVar8 + 0x48);
    pcVar4 = *(code **)(lVar8 + 0x10);
    do {
      (*pcVar4)(puVar5,*(long *)(unaff_x20 + 0x30) + lVar6 * param_2,lVar1);
      puVar2 = puVar5;
      __sSQ2eeoiySbx_xtFZTj(puVar5,local_68,lVar1,PTR___ss17CodingUserInfoKeyVSQsWP_100995b78);
      uVar7 = (uint)puVar2;
      (**(code **)(lVar8 + 8))(puVar5,lVar1);
      if (((ulong)puVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f)
             & 1) != 0);
  }
  auVar9._8_4_ = uVar7 & 1;
  auVar9._0_8_ = param_2;
  auVar9._12_4_ = 0;
  return auVar9;
}

