// rea decompile_all
// name: FUN_1003cd49c
// address: 0x1003cd49c
// body: available
// range: 0x1003cd49c-0x1003cd6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003cd49c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *in_x4;
  
  __ss11_StringGutsV4growyySiF(99);
  __sSS6appendyySSF(0x1000000000000023,0x80000001008b42d0);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar3 = PTR___sSiN_100995968;
  if (!SCARRY8(*(long *)(param_2 + _TtC8UUCommon18IPSReportCollector::attempt),1)) {
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0x6469646e6163202c,0xed00003d73657461);
    puVar5 = puVar6;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0x7463656c6573202c,0xeb000000003d6465);
    puVar5 = puVar6;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0x74726f706572202c,0xea00000000003d73);
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar6);
    __sSS6appendyySSF(0xd000000000000014,0x80000001008b4300);
    uVar1 = 0x65757274;
    if (*in_x4 == '\0') {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (*in_x4 == '\0') {
      uVar2 = 0xe500000000000000;
    }
    __sSS6appendyySSF(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    param_1[3] = PTR___sSSN_1009957f8;
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003cd6e8);
  (*pcVar4)();
}

