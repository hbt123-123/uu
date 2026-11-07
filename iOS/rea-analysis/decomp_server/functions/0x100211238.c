// rea decompile_all
// name: FUN_100211238
// address: 0x100211238
// body: available
// range: 0x100211238-0x1002113ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100211238(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  
  __ss11_StringGutsV4growyySiF(0x7b);
  __sSS6appendyySSF(0x100000000000005a,0x80000001008a5120);
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x61447473696c202c,0xef3d657a69536174);
  uVar1 = (uint)((ulong)param_5 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if ((uVar4 != 0) && (SBORROW4((int)((ulong)param_4 >> 0x20),(int)param_4))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002113f0);
      (*pcVar2)();
    }
  }
  else if ((uVar4 == 2) && (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100211380);
    (*pcVar2)();
  }
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

