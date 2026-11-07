// rea decompile_all
// name: FUN_10012e214
// address: 0x10012e214
// body: available
// range: 0x10012e214-0x10012e7fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10012e214(undefined8 *param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_200 [4];
  undefined8 local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  ID local_1c0;
  ID local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  local_80 = param_1[8];
  local_70 = param_1[10];
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_1d0 = *(long *)(lVar1 + -8);
  local_1c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1d0 + 0x40));
  lVar12 = (long)&local_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_1c8 = lVar12;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  local_1d8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  IVar2 = NSURLSessionConfiguration::defaultSessionConfiguration
                    ((ID)&_OBJC_CLASS___NSURLSessionConfiguration,"defaultSessionConfiguration");
  IVar3 = IVar2;
  FUN_100130770();
  if (IVar3 == 0) {
    IVar5 = 0;
  }
  else {
    IVar5 = IVar3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(IVar3);
  }
  NSURLSessionConfiguration::setConnectionProxyDictionary_
            (IVar2,"setConnectionProxyDictionary:",IVar5);
  lVar4 = 0;
  FUN_1001303d8();
  _objc_allocWithZone();
  puVar11 = (undefined8 *)(lVar4 + _TtC14UURemoteServer30ControlledProxySessionDelegate::proxy);
  uVar10 = *param_1;
  uVar9 = param_1[3];
  uVar6 = param_1[2];
  puVar11[1] = param_1[1];
  *puVar11 = uVar10;
  uVar13 = param_1[5];
  uVar10 = param_1[4];
  uVar15 = param_1[7];
  uVar14 = param_1[6];
  uVar17 = param_1[9];
  uVar16 = param_1[8];
  puVar11[10] = param_1[10];
  puVar11[7] = uVar15;
  puVar11[6] = uVar14;
  puVar11[9] = uVar17;
  puVar11[8] = uVar16;
  puVar11[3] = uVar9;
  puVar11[2] = uVar6;
  puVar11[5] = uVar13;
  puVar11[4] = uVar10;
  FUN_1000a03e8(param_1,&local_120);
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  FUN_1002f20c0();
  uVar6 = 0;
  FUN_1002ef3cc();
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_190 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  local_1e0 = uVar6;
  FUN_100004b70(0);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  local_130 = 0;
  IVar3 = IVar5;
  local_1b8 = IVar2;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar1);
  local_158 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000aad00();
  puVar7 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar8 = puVar7;
  FUN_100004bf8();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar12,&local_158,puVar7,puVar8,local_1d8,IVar3);
  lVar4 = local_1c8;
  (**(code **)(local_1d0 + 0x68))
            (local_1c8,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,local_1c0);
  uVar9 = 0xd00000000000001f;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001f,0x800000010088f0f0,lVar1,lVar12,lVar4,0);
  puVar7 = &DAT_100a79db0;
  FUN_100004bb4(&DAT_100a79db0,&DAT_10080e988);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  uVar10 = 0;
  FUN_1002c2264();
  uVar6 = uVar10;
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x38) = uVar10;
  *(undefined ***)(puVar7 + 0x40) = &PTR_PTR_1009ad308;
  *(undefined8 *)(puVar7 + 0x20) = uVar6;
  *(undefined8 **)(lVar1 + -0x10) = &local_150;
  *(undefined **)(lVar1 + -8) = puVar7;
  *(undefined8 *)(lVar1 + -0x20) = 0;
  *(undefined8 **)(lVar1 + -0x18) = &local_1b0;
  IVar3 = local_1b8;
  local_1c0 = IVar5;
  FUN_1002e09cc(local_1b8,IVar5,uVar9,1,0,0,0,&local_120);
  FUN_1003b1198();
  FUN_1003a6464(IVar3);
  if (DAT_100a73b58 != -1) {
    _swift_once(&DAT_100a73b58,FUN_1000c77dc);
  }
  lVar12 = DAT_100b360a0;
  puVar11 = param_1;
  FUN_1000c7a10();
  IVar2 = *(ID *)(lVar12 + 0x10);
  _objc_msgSend(IVar2,"lock");
  IVar5 = *(ID *)(lVar12 + 0x18);
  *(undefined8 **)(lVar12 + 0x18) = puVar11;
  _objc_msgSend(IVar2,"unlock");
  _objc_msgSend(IVar5,"finishTasksAndInvalidate");
  if (DAT_100a73b28 != -1) {
    _swift_once(&DAT_100a73b28,FUN_1000a0144);
  }
  lVar12 = DAT_100b36090;
  puVar11 = param_1;
  FUN_1000a0244();
  IVar2 = *(ID *)(lVar12 + 0x10);
  _objc_msgSend(IVar2,"lock");
  *(undefined8 **)(lVar12 + 0x18) = puVar11;
  _objc_msgSend(IVar2,"unlock");
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x40);
  local_100 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x60);
  local_e0 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x20);
  local_120 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x38) = local_a0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x58) = local_80;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x18) = local_c0;
  local_d0 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = local_70;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_b0;
  FUN_100040bb4(&local_120,&DAT_100a79da8,&DAT_10080e978);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 **)(lVar1 + -0x10) = param_1;
  FUN_1000a03e8(param_1,&local_1b0);
  FUN_1003fb48c(FUN_10012eec0,lVar1 + -0x20,0xd00000000000009a,0x800000010088ef70,0xd000000000000014
                ,0x800000010088f110,0x6f,0xb);
  _swift_release(IVar3);
  return;
}

