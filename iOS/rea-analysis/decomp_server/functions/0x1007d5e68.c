// rea decompile_all
// name: thunk_FUN_1007d6500
// address: 0x1007d5e68
// body: available
// range: 0x1007d5e68-0x1007d5e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] thunk_FUN_1007d6500(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __s10Foundation4UUIDV10uuidStringSSvg(_TtC6Sentry8SentryId::id);
  uStack_50 = 0x2d;
  uStack_48 = 0xe100000000000000;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  uStack_40 = param_1;
  uStack_38 = param_2;
  FUN_10009ff0c();
  puVar1 = &uStack_50;
  puVar2 = &uStack_60;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar1,puVar2,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,
             param_1,param_1,param_1);
  _swift_bridgeObjectRelease(param_2);
  puVar3 = puVar2;
  __sSS10lowercasedSSyF(puVar1,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  auVar4._8_8_ = puVar3;
  auVar4._0_8_ = puVar1;
  return auVar4;
}

