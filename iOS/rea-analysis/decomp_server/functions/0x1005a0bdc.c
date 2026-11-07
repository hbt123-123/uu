// rea decompile_all
// name: FUN_1005a0bdc
// address: 0x1005a0bdc
// body: available
// range: 0x1005a0bdc-0x1005a0ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005a0bdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3 + 0x18,auStack_58,0,0);
  uVar4 = *(ulong *)(param_3 + 0x28);
  if (uVar4 == 0) {
LAB_1005a0c50:
    _swift_beginAccess(param_3 + 0x38,auStack_70,0,0);
    uVar4 = *(ulong *)(param_3 + 0x48);
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(param_3 + 0x50);
      uVar3 = *(undefined8 *)(param_3 + 0x38);
      uVar1 = *(undefined8 *)(param_3 + 0x40);
      FUN_100008184(uVar3,uVar1);
      uVar2 = uVar4;
      _swift_bridgeObjectRetain();
      FUN_100510c38();
      FUN_100541944(uVar3,uVar1,uVar4,uVar5);
      if ((uVar2 & 1) == 0) goto LAB_1005a0cb0;
    }
    uVar3 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    FUN_100008184(uVar3,uVar1);
    uVar2 = uVar4;
    _swift_bridgeObjectRetain();
    FUN_100510c38();
    FUN_100541944(uVar3,uVar1,uVar4,uVar5);
    if ((uVar2 & 1) != 0) goto LAB_1005a0c50;
LAB_1005a0cb0:
    uVar3 = 0;
  }
  return uVar3;
}

