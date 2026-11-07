// rea decompile_all
// name: thunk_FUN_1006654ec
// address: 0x1006656cc
// body: available
// range: 0x1006656cc-0x1006656cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] thunk_FUN_1006654ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  long alStack_58 [3];
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100ab7e48;
  FUN_100004bb4(&DAT_100ab7e48,&DAT_100848d08);
  puVar2 = puVar1;
  puStack_40 = puVar1;
  FUN_10066567c();
  plVar3 = alStack_58;
  alStack_58[0] = param_1;
  puStack_38 = puVar2;
  FUN_10003f030(plVar3,puVar1);
  uVar6 = *(ulong *)(*plVar3 + 0x10);
  if (uVar6 == 0) {
    uVar8 = 0;
    uVar7 = 0xc000000000000000;
  }
  else {
    uVar8 = *plVar3 + 0x20;
    if (uVar6 < 0xf) {
      uVar6 = uVar8 + uVar6;
      FUN_1001f8388(uVar8,uVar6);
      uVar7 = uVar6 & 0xffffffffffffff;
    }
    else {
      uVar4 = 0;
      __s10Foundation13__DataStorageCMa();
      _swift_allocObject();
      __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(uVar8,uVar6,uVar4);
      if (uVar6 < 0x7fffffff) {
        uVar7 = uVar8 | 0x4000000000000000;
        uVar8 = uVar6 << 0x20;
      }
      else {
        uVar5 = 0;
        __s10Foundation4DataV14RangeReferenceCMa();
        _swift_allocObject();
        *(undefined8 *)(uVar5 + 0x10) = 0;
        *(ulong *)(uVar5 + 0x18) = uVar6;
        uVar7 = uVar8 | 0x8000000000000000;
        uVar8 = uVar5;
      }
    }
  }
  FUN_10003f094(alStack_58);
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar8;
  return auVar9;
}

