// rea decompile_all
// name: FUN_1001d8468
// address: 0x1001d8468
// body: available
// range: 0x1001d8468-0x1001d8623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001d84c4) */
/* WARNING: Removing unreachable block (ram,0x0001001d84cc) */

void FUN_1001d8468(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar1 = 0;
  FUN_1000a9e9c();
  uVar3 = 0x80;
  _swift_allocObject();
  FUN_1000a2530();
  uVar2 = uVar1;
  FUN_1000a2cd8();
  uVar4 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalManager::tmuxController);
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalManager::tmuxController) = uVar1;
  _swift_retain(uVar1);
  _swift_release(uVar4);
  FUN_1000a6740();
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_80 = uVar2;
  uStack_78 = uVar3;
  local_70 = uVar1;
  FUN_1003fb48c(FUN_1001e49d8,auStack_90,0xd000000000000095,0x8000000100889250,0xd000000000000015,
                0x800000010089fb50,0x129,0);
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

