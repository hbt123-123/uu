// rea decompile_all
// name: FUN_10005ef9c
// address: 0x10005ef9c
// body: available
// range: 0x10005ef9c-0x10005f083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005ef9c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_60,1,0);
    *(undefined1 *)(param_1 + 0x10) = 1;
    _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    _swift_weakLoadStrong();
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x98);
      uVar2 = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      FUN_10007ed2c(uVar1,uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0xa8);
      uVar2 = *(undefined8 *)(param_2 + 0xb0);
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xb0) = 0;
      FUN_10007ed2c(uVar1,uVar2);
      *(undefined1 *)(param_2 + 0x90) = 0;
      if (*(char *)(param_2 +
                   _TtC14UURemoteServer25VirtualDisplayCoordinator::needsTopologyReconcile) ==
          '\x01') {
        *(undefined1 *)
         (param_2 + _TtC14UURemoteServer25VirtualDisplayCoordinator::needsTopologyReconcile) = 0;
        FUN_1000509d0(0x676e69646e6570,0xe700000000000000);
      }
      FUN_10005edf0();
      _swift_release(param_2);
    }
  }
  return;
}

