// rea decompile_all
// name: FUN_1000ca734
// address: 0x1000ca734
// body: available
// range: 0x1000ca734-0x1000ca923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000ca734(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_70 [16];
  
  FUN_100401b14(0);
  pcVar3 = FUN_1000cdc44;
  FUN_1003fb48c(FUN_1000cdc44,auStack_70,0xd00000000000009c,0x8000000100885110,0xd00000000000001f,
                0x8000000100885210,0x8d,0);
  FUN_1000c8ac4();
  FUN_1003fb48c(FUN_10017a06c,0,0xd00000000000009b,0x8000000100885230,0xd000000000000011,
                0x80000001008852d0,0x1ab,0);
  pcVar3[0x20] = (code)0x1;
  _swift_release(pcVar3);
  FUN_1000c8148();
  uVar2 = *(undefined4 *)(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::handle);
  FUN_1000f7b10(uVar2);
  _swift_release(pcVar3);
  FUN_1000ca9f4();
  FUN_1003fb45c(FUN_1000cad4c,0,0xd00000000000009c,0x8000000100885110,0xd00000000000001f,
                0x8000000100885210,0x91,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar4 = DAT_100b360a8;
  uVar5 = *(undefined8 *)(DAT_100b360a8 + 0x80);
  _swift_retain(uVar5);
  FUN_1000162bc(uVar2,0);
  _swift_release(uVar5);
  FUN_100006d1c(*(undefined8 *)(lVar4 + 0x60));
  lVar4 = *(long *)(*(long *)(lVar4 + 0x48) + 0x10);
  puVar1 = (undefined8 *)(lVar4 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           (lVar4 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  return 0;
}

