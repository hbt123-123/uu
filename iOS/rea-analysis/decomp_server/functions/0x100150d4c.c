// rea decompile_all
// name: FUN_100150d4c
// address: 0x100150d4c
// body: available
// range: 0x100150d4c-0x100150edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100150d4c(undefined8 *param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  __ss11_StringGutsV4growyySiF(0x60);
  __sSS6appendyySSF(0x100000000000003e,0x8000000100892550);
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  puVar4 = PTR___ss6UInt64VN_100995e10;
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0xe58d89e593bde52d,0xae003abba7e78f81);
  FUN_100149dec();
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xe58e90e5809ce62d,0xae003a8fb0e5a7a4);
  if (*(ulong *)(param_3 +
                _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
                ___lazy_storage___currentOffset) <= param_2) {
    puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    param_1[3] = PTR___sSSN_1009957f8;
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100150ee0);
  (*pcVar1)();
}

