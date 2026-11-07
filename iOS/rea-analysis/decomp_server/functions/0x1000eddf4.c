// rea decompile_all
// name: FUN_1000eddf4
// address: 0x1000eddf4
// body: available
// range: 0x1000eddf4-0x1000edec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000eddf4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000edec4,0,0xd0000000000000a9,0x80000001008887a0,0x74696e696564,
                0xe600000000000000,0x1b,0);
  lVar1 = _TtC14UURemoteServer23FileTransferResumeStore::rootURL;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer23FileTransferResumeStore::encoder)
                );
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer23FileTransferResumeStore::decoder)
                );
  return;
}

