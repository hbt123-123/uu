// rea decompile_all
// name: FUN_10051b78c
// address: 0x10051b78c
// body: available
// range: 0x10051b78c-0x10051b8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10051b7dc to 0x1007dba34 _$sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051b78c(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
      }
      __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ();
      return;
    }
    uStack_60 = param_4 & 0xffffffffffffff;
    local_68 = param_3;
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ
              ((long)&local_68 + ((ulong)param_1 >> 0x10),
               (param_2 >> 0x10) - ((ulong)param_1 >> 0x10));
  }
  else {
    puVar2 = param_1;
    __sSs8UTF8ViewV8distance4from2toSiSS5IndexV_AGtF(param_1,param_2,param_1,param_2);
    puVar3 = (ulong *)PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar2 != (ulong *)0x0) {
      puVar3 = puVar2;
      FUN_10051b8d0();
      puVar4 = &local_68;
      FUN_10000c88c(puVar4,puVar3 + 4,puVar2,param_1,param_2,param_3,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (puVar4 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b88c);
        (*pcVar1)();
      }
    }
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(puVar3 + 4,puVar3[2]);
    _swift_release(puVar3);
  }
  return;
}

