// rea decompile_all
// name: FUN_100125c68
// address: 0x100125c68
// body: available
// range: 0x100125c68-0x100125d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100125c68(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  FUN_100401b14(0);
  local_50 = param_1;
  uStack_4c = param_2;
  FUN_1003fb48c(uVar1,FUN_100126514,auStack_60,0xd000000000000098,0x800000010088de90,
                0xd000000000000022,0x800000010088e000,0x85,0);
  lVar2 = *(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::room);
  _swift_beginAccess(lVar2 + 0x28,auStack_48,1,0);
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  return;
}

