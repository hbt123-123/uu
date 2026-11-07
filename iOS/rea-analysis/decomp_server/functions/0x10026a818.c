// rea decompile_all
// name: FUN_10026a818
// address: 0x10026a818
// body: available
// range: 0x10026a818-0x10026aa87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026aa84 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026a818(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar8 = *(long *)(lVar1 + -8);
  lVar7 = (long)&local_b0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar9 = lVar7 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_1009a90c8;
  _swift_allocObject(&DAT_1009a90c8,0x28,7);
  *(code **)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  if (param_4 == 0) {
    if (param_2 != (code *)0x0) {
      FUN_10004090c(param_2,param_3);
      (*param_2)(0,param_1);
    }
    _swift_release(puVar3);
    return;
  }
  local_70 = FUN_10026b600;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a90e0;
  local_a0 = lVar2;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  local_a8 = lVar10;
  FUN_10004090c(param_2,param_3);
  puVar4 = puVar3;
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10026b624();
  puVar5 = &DAT_100a81398;
  FUN_100004bb4(&DAT_100a81398,&DAT_100815530);
  puVar6 = &DAT_100a813a0;
  local_b0 = lVar8;
  FUN_1000d61d8(&DAT_100a813a0,&DAT_100a81398,&DAT_100815530);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar7,&local_98,puVar5,puVar6,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar9,lVar7,aBlock);
  __Block_release(aBlock);
  _swift_release(puVar3);
  (**(code **)(local_b0 + 8))(lVar7,lVar1);
  (**(code **)(local_a8 + 8))(lVar9,local_a0);
  _swift_release(local_68);
  return;
}

