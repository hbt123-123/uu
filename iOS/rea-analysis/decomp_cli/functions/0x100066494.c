// rea decompile_all
// name: FUN_100066494
// address: 0x100066494
// body: available
// range: 0x100066494-0x1000665c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100066494(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar2 = param_4 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    uVar1 = 0xf;
    uVar2 = param_3;
    uVar4 = param_4;
    __sSSySJSS5IndexVcig(0xf,param_3,param_4);
    _swift_bridgeObjectRetain(param_2);
    uVar3 = uVar2;
    __sSJ10uppercasedSSyF(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    __sSS6appendyySSF(uVar1,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRetain(param_4);
    uVar1 = 1;
    uVar2 = param_4;
    FUN_100096c3c(1,param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    __sSS14_fromSubstringySSSshFZ(uVar1,param_3,uVar2,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    __sSS6appendyySSF(uVar1,param_3);
    _swift_bridgeObjectRelease(param_3);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}

