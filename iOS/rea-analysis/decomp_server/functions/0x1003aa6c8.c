// rea decompile_all
// name: FUN_1003aa6c8
// address: 0x1003aa6c8
// body: available
// range: 0x1003aa6c8-0x1003aa82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003aa6c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  long local_90 [3];
  undefined1 auStack_78 [24];
  undefined8 local_58;
  
  uVar5 = *(undefined8 *)(*param_5 + 0x50);
  uVar1 = 0;
  FUN_1003de7bc(0,uVar5);
  FUN_1003de628(param_2,param_3,param_4,uVar1);
  _swift_beginAccess(param_5 + 2,auStack_78,1,0);
  lVar4 = param_5[2];
  uVar1 = 0xff;
  local_a0 = uVar5;
  local_90[0] = lVar4;
  FUN_1003ab028(0xff,uVar5);
  uVar5 = 0;
  __sSaMa(0,uVar1);
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(lVar4);
  puVar2 = PTR___sSayxGs14_ArrayProtocolsMc_1009958c0;
  _swift_getWitnessTable(PTR___sSayxGs14_ArrayProtocolsMc_1009958c0,uVar5);
  pcVar3 = FUN_1003ab330;
  __ss14_ArrayProtocolPsE6filterySay7ElementQzGSbAEKXEKF(FUN_1003ab330,auStack_b0,uVar5,puVar2);
  lVar4 = param_5[2];
  param_5[2] = (long)pcVar3;
  _swift_bridgeObjectRelease(lVar4);
  uVar1 = param_2;
  FUN_1003ab254();
  local_58 = uVar1;
  _swift_beginAccess(param_5 + 2,local_90,0x21,0);
  __sSa6appendyyxnF(&local_58,uVar5);
  _swift_endAccess(local_90);
  *param_1 = param_2;
  return;
}

