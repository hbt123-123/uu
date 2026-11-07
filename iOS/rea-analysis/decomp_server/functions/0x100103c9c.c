// rea decompile_all
// name: FUN_100103c9c
// address: 0x100103c9c
// body: available
// range: 0x100103c9c-0x100103e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100103c9c(byte param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_70 [16];
  byte local_60;
  undefined1 auStack_58 [24];
  
  FUN_100401b14(0);
  local_60 = param_1;
  FUN_1003fb48c(FUN_100104094,auStack_70,0xd0000000000000a7,0x800000010088a720,0xd00000000000001a,
                0x800000010088a7d0,0x32,0);
  if ((param_1 & 1) == 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 == 0) {
      return;
    }
    FUN_1003fb48c(FUN_100103f38,0,0xd0000000000000a7,0x800000010088a720,0xd000000000000014,
                  0x800000010088a7f0,0x43,0);
    pcVar3 = *(code **)(param_2 +
                       _TtC14UURemoteServer30AccessibilityPermissionMonitor::permissionChanged);
    if (pcVar3 == (code *)0x0) {
      return;
    }
    lVar2 = ((long *)(param_2 +
                     _TtC14UURemoteServer30AccessibilityPermissionMonitor::permissionChanged))[1];
    _swift_retain(lVar2);
    uVar1 = 0;
  }
  else {
    _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 == 0) {
      return;
    }
    FUN_1003fb48c(FUN_100103f0c,0,0xd0000000000000a7,0x800000010088a720,0xd000000000000015,
                  0x800000010088a810,0x3d,0);
    pcVar3 = *(code **)(param_2 +
                       _TtC14UURemoteServer30AccessibilityPermissionMonitor::permissionChanged);
    if (pcVar3 == (code *)0x0) {
      return;
    }
    lVar2 = ((long *)(param_2 +
                     _TtC14UURemoteServer30AccessibilityPermissionMonitor::permissionChanged))[1];
    _swift_retain(lVar2);
    uVar1 = 1;
  }
  (*pcVar3)(uVar1);
  FUN_10008317c(pcVar3,lVar2);
  return;
}

