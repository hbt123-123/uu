// rea decompile_all
// name: _TtC14UURemoteServer14SuspendManager::activePidDataDidChange:
// address: 0x1001b74b8
// body: available
// range: 0x1001b74b8-0x1001b7593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void _TtC14UURemoteServer14SuspendManager::activePidDataDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long extraout_x8;
  ID self;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  self = *(ID *)(param_1 + 0x40);
  _swift_retain(param_1);
  _objc_msgSend(self,"lock");
  FUN_1001b5f48(0x1000000000000010,0x800000010089ba70);
  FUN_1001b629c();
  _objc_msgSend(*(ID *)(param_1 + 0x40),"unlock");
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  _swift_release(param_1);
  return;
}

