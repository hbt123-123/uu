// rea decompile_all
// name: FUN_100279950
// address: 0x100279950
// body: available
// range: 0x100279950-0x100279b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100279950(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  puVar1 = &DAT_100a82478;
  FUN_100004bb4(&DAT_100a82478,&DAT_100816c10);
  lVar7 = (long)&local_60 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100278a38();
  if (puVar1 == (undefined *)0x0) {
    __s10Foundation8URLErrorVMa();
    (**(code **)(*(long *)(puVar1 + -8) + 0x38))(lVar7,1,1,puVar1);
LAB_100279acc:
    FUN_100040bb4(lVar7,&DAT_100a82478,&DAT_100816c10);
    uStack_48 = 0;
    local_50 = (undefined *)0x0;
    local_38 = 0;
    uStack_40 = 0;
  }
  else {
    puVar2 = &DAT_100a82488;
    local_50 = puVar1;
    FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
    uVar3 = 0;
    __s10Foundation8URLErrorVMa();
    lVar4 = lVar7;
    _swift_dynamicCast(lVar7,&local_50,puVar2,uVar3,6);
    lVar9 = *(long *)(uVar3 - 8);
    (**(code **)(lVar9 + 0x38))(lVar7,(uint)lVar4 ^ 1,1,uVar3);
    lVar4 = lVar7;
    (**(code **)(lVar9 + 0x30))(lVar7,1,uVar3);
    if ((int)lVar4 == 1) goto LAB_100279acc;
    puVar5 = &DAT_100a82490;
    FUN_100005c90(&DAT_100a82490,PTR___s10Foundation8URLErrorVMa_1009962f0,
                  PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_1009962e8);
    uVar6 = uVar3;
    __s10Foundation21_BridgedStoredNSErrorPAAE8userInfoSDySSypGvg(uVar3,puVar5);
    (**(code **)(lVar9 + 8))(lVar7);
    lVar7 = *(long *)PTR__NSURLSessionDownloadTaskResumeData_100995210;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar7);
    if (*(long *)(uVar6 + 0x10) == 0) {
LAB_100279b28:
      uStack_48 = 0;
      local_50 = (undefined *)0x0;
      local_38 = 0;
      uStack_40 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uVar6);
      uVar8 = uVar3;
      FUN_1001a2c70(lVar7);
      if ((uVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar6);
        goto LAB_100279b28;
      }
      FUN_10003e8bc(*(long *)(uVar6 + 0x38) + lVar7 * 0x20,&local_50);
      _swift_bridgeObjectRelease(uVar3);
      uVar3 = uVar6;
    }
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar6);
    if (local_38 != 0) {
      puVar5 = &local_60;
      _swift_dynamicCast(puVar5,&local_50,PTR___sypN_100995e88 + 8,
                         PTR___s10Foundation4DataVN_1009961e8,6);
      if ((int)puVar5 == 0) {
        local_60 = 0;
        uStack_58 = 0xf000000000000000;
      }
      goto LAB_100279b0c;
    }
  }
  FUN_100040bb4(&local_50,&DAT_100a82480,&DAT_1008182d0);
  local_60 = 0;
  uStack_58 = 0xf000000000000000;
LAB_100279b0c:
  auVar10._8_8_ = uStack_58;
  auVar10._0_8_ = local_60;
  return auVar10;
}

