// rea decompile_all
// name: FUN_1003b0860
// address: 0x1003b0860
// body: available
// range: 0x1003b0860-0x1003b0977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b0860(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  puVar2 = &DAT_100a766c8;
  pcVar1 = (code *)&DAT_10080b1d0;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (DAT_100a89248 != -1) {
    pcVar1 = FUN_1003ab4b8;
    _swift_once(&DAT_100a89248,FUN_1003ab4b8);
  }
  if (DAT_100a89188 != -1) {
    pcVar1 = FUN_1003a018c;
    _swift_once(&DAT_100a89188,FUN_1003a018c);
  }
  FUN_1003a0260();
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar5);
  _swift_bridgeObjectRelease(pcVar1);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar3 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 != 1) {
    (**(code **)(lVar6 + 0x20))(param_1,puVar5,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b0978);
  (*pcVar1)();
}

