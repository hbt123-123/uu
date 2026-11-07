// rea decompile_all
// name: FUN_1000bf184
// address: 0x1000bf184
// body: available
// range: 0x1000bf184-0x1000bf27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000bf184(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar7 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_50 = param_1;
  uStack_48 = param_2;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar6);
  FUN_10009ff0c();
  uVar4 = uVar6;
  puVar3 = PTR___sSSN_1009957f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(uVar6,PTR___sSSN_1009957f8,lVar2);
  (**(code **)(lVar7 + 8))(uVar6,lVar1);
  puVar5 = puVar3;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(puVar3);
  uVar6 = uVar4 & 0xffffffffffff;
  if (((ulong)puVar5 & 0x2000000000000000) != 0) {
    uVar6 = (ulong)puVar5 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    _swift_bridgeObjectRelease(puVar5);
    uVar4 = 0;
    puVar5 = (undefined *)0x0;
  }
  auVar8._8_8_ = puVar5;
  auVar8._0_8_ = uVar4;
  return auVar8;
}

