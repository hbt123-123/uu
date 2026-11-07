// rea decompile_all
// name: FUN_1002dd0f4
// address: 0x1002dd0f4
// body: available
// range: 0x1002dd0f4-0x1002dd25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002dd0f4(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar4 = param_1;
  (**(code **)(lVar10 + 0x30))(param_1,1,lVar2);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 8))(param_1,lVar2);
  }
  param_1 = param_1 + *(long *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  uVar9 = param_1 + 7U & 0xfffffffffffffff8;
  if ((*(ulong *)(uVar9 + 0x10) & 0x3000000000000000) == 0) {
    FUN_100006cdc(*(undefined8 *)(uVar9 + 8));
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar6 = (ulong)(*(byte *)(lVar4 + 0x50) | *(byte *)(lVar2 + 0x50));
  puVar3 = (uint *)(uVar9 + uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff));
  uVar9 = *(ulong *)(lVar4 + 0x40);
  if (*(ulong *)(lVar4 + 0x40) <= *(ulong *)(lVar2 + 0x40)) {
    uVar9 = *(ulong *)(lVar2 + 0x40);
  }
  bVar1 = *(byte *)((long)puVar3 + uVar9);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar9;
    uVar8 = 4;
    if (uVar5 < 4) {
      uVar8 = uVar5;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1002dd23c;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1002dd23c:
  lVar10 = *(long *)(param_2 + 0x18);
  if (uVar7 != 1) {
    lVar10 = *(long *)(param_2 + 0x10);
    lVar4 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002dd258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(puVar3,lVar10);
  return;
}

