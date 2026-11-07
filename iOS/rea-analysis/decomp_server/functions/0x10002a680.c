// rea decompile_all
// name: FUN_10002a680
// address: 0x10002a680
// body: available
// range: 0x10002a680-0x10002a803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002a680(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  
  *(undefined1 *)(unaff_x20 + 0x158) = 0;
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_10002a804,0,0xd0000000000000a9,0x8000000100877660,&DAT_d000000000000010,
                0x8000000100877f30,0x685,0);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar2 != 0) &&
     (lVar2 = *(long *)(lVar2 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar2 != 0)) {
    uVar1 = *(undefined4 *)(lVar2 + _TtC14UURemoteServer22StreamerConnectSession::handle);
    FUN_1003fb48c(FUN_10002a830,0,0xd0000000000000a9,0x8000000100877660,&DAT_d000000000000010,
                  0x8000000100877f30,0x687,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_60 = uVar1;
    FUN_1003fb48c(FUN_10003f650,auStack_70,0xd0000000000000a9,0x8000000100877660,
                  &DAT_d000000000000010,0x8000000100877f30,0x688,0);
    FUN_1000509d0(0x5779616c70736964,0xeb00000000656b61);
    FUN_10002a948(uVar1);
  }
  return;
}

