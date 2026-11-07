// rea decompile_all
// name: FUN_100197aac
// address: 0x100197aac
// body: available
// range: 0x100197aac-0x100197e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100197aac(ID param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  undefined1 auStack_110 [8];
  long local_108;
  long lStack_100;
  long local_f8;
  undefined1 auStack_f0 [16];
  ID local_e0;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f8 + 0x40));
  puVar8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_108 = *(long *)(lVar2 + -8);
  lStack_100 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108 + 0x40));
  lVar2 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100401b14(0);
  local_e0 = param_1;
  FUN_1003fb45c(FUN_100198c70,auStack_f0,0xd0000000000000b0,0x8000000100899320,0xd00000000000002d,
                0x8000000100899600,0x94,7);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  IVar3 = _objc_msgSend(param_1,"code");
  puVar4 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar5 = 0x6144656c676e6973;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6144656c676e6973,0xea00000000006174);
  IVar3 = _objc_msgSend((ID)puVar4,"initWithDomain:code:userInfo:",uVar5,IVar3,0);
  FUN_100616260(IVar3);
  _swift_beginAccess(param_3 + 0x10,auStack_80,1,0);
  *(undefined1 *)(param_3 + 0x10) = 0;
  _swift_beginAccess(param_4 + 0x10,auStack_98,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 != 0) {
    FUN_100194478();
    puVar4 = &DAT_1009a16a0;
    _swift_allocObject(&DAT_1009a16a0,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    local_a8 = thunk_FUN_1000a9f7c;
    local_c8 = PTR___NSConcreteStackBlock_100995490;
    local_c0 = 0x42000000;
    local_b8 = FUN_1000acdb4;
    puStack_b0 = &DAT_1009a16b8;
    local_a0 = puVar4;
    aBlock = __Block_copy(&local_c8);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2,param_5);
    local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar4 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar8,&local_d0,puVar4,puVar7,lVar1,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar2,puVar8,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_f8 + 8))(puVar8,lVar1);
    (**(code **)(local_108 + 8))(lVar2,lStack_100);
    _swift_release(local_a0);
  }
  return;
}

