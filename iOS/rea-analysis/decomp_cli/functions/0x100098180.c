// rea decompile_all
// name: FUN_100098180
// address: 0x100098180
// body: available
// range: 0x100098180-0x10009836f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100098180(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = 0x2d2d;
  FUN_100097f40(0x2d2d,0xe200000000000000,param_1,param_2,param_3,param_4);
  uVar3 = param_2;
  uVar5 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    __sSs8distance4from2toSiSS5IndexV_AEtF(param_1,param_2,param_1,param_2,param_3,param_4);
    if ((uVar2 == 2) && (0x3fff < (param_2 ^ param_1))) {
      __sSs5index6beforeSS5IndexVAD_tF(param_2,param_1,param_2,param_3,param_4);
      __sSsySJSS5IndexVcig();
      uVar5 = param_4;
      uVar3 = param_2;
    }
    else {
      uVar4 = 1;
      uVar2 = param_1;
      __sSs5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF
                (param_1,1,param_2,param_1,param_2,param_3,param_4);
      if ((uVar4 & 1) == 0) {
        uVar3 = uVar2;
      }
      if (param_2 >> 0xe < uVar3 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100098370);
        (*pcVar1)();
      }
      __sSsySsSnySS5IndexVGcig(uVar3,param_2,param_1,param_2,param_3,param_4);
      _swift_bridgeObjectRelease(param_4);
      __sSS14_fromSubstringySSSshFZ(uVar3,param_2,param_1,uVar5);
    }
  }
  else {
    uVar2 = 0;
    uVar4 = param_1;
    __sSs5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF
              (param_1,2,param_2,param_1,param_2,param_3,param_4);
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar4;
    }
    if (param_2 >> 0xe < uVar3 >> 0xe) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10009836c);
      (*pcVar1)();
    }
    __sSsySsSnySS5IndexVGcig(uVar3,param_2,param_1,param_2,param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    __sSS14_fromSubstringySSSshFZ(uVar3,param_2,param_1,uVar5);
  }
  _swift_bridgeObjectRelease(uVar5);
  return uVar3;
}

