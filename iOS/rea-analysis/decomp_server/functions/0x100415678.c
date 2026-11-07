// rea decompile_all
// name: FUN_100415678
// address: 0x100415678
// body: available
// range: 0x100415678-0x1004157cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100415678(double param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  if ((*(byte *)(unaff_x20 + 0xa0) & 1) == 0) {
    if ((long)param_2 < 1) {
      return;
    }
    if (ABS(param_1 - *(double *)(unaff_x20 + 0x98)) <= (double)param_2) {
      return;
    }
    pcVar5 = *(code **)(unaff_x20 + 0x38);
    if (pcVar5 != (code *)0x0) {
      __ss11_StringGutsV4growyySiF(0x22);
      _swift_bridgeObjectRelease(0xe000000000000000);
      puVar3 = &DAT_100a766e8;
      FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
      _swift_allocObject();
      puVar1 = PTR___sSdN_1009958f0;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      puVar2 = PTR___sSds7CVarArgsWP_100995920;
      *(undefined **)(puVar3 + 0x38) = puVar1;
      *(undefined **)(puVar3 + 0x40) = puVar2;
      *(double *)(puVar3 + 0x20) = param_1;
      uVar4 = 0xe400000000000000;
      __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66312e25,0xe400000000000000,puVar3);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar4);
      __sSS6appendyySSF(0x424d,0xe200000000000000);
      (*pcVar5)(0x100000000000001e,0x80000001008b6850);
      _swift_bridgeObjectRelease(0x80000001008b6850);
    }
  }
  *(double *)(unaff_x20 + 0x98) = param_1;
  *(undefined1 *)(unaff_x20 + 0xa0) = 0;
  return;
}

