// rea decompile_all
// name: FUN_100266974
// address: 0x100266974
// body: available
// range: 0x100266974-0x100266c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100266974(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_130 [4];
  ID local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar13 = *(long *)(lVar1 + -8);
  lVar11 = (long)&local_110 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar12 = lVar11 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar3 = lVar12 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)
           NSURLSessionConfiguration::defaultSessionConfiguration
                     ((ID)&_OBJC_CLASS___NSURLSessionConfiguration,"defaultSessionConfiguration");
  local_108 = puVar4;
  FUN_1002be020();
  _swift_bridgeObjectRetain(*puVar4);
  FUN_1002bf4b8();
  uVar5 = 0;
  FUN_1002ef3cc();
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_100 = uVar5;
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar5 = 0;
  FUN_1002f21ac(0);
  _objc_allocWithZone();
  FUN_1002f20c0(IVar6,uVar5);
  uVar5 = 0;
  local_110 = IVar6;
  FUN_100265294(0);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  local_f8 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100266c14();
  puVar7 = &DAT_100a81348;
  FUN_100004bb4(&DAT_100a81348,&DAT_1008154e8);
  puVar8 = puVar7;
  FUN_100266c58();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar12,&local_f8,puVar7,puVar8,lVar2,uVar5);
  (**(code **)(lVar13 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lVar1);
  uVar9 = 0xd00000000000001f;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001f,0x800000010088f0f0,lVar3,lVar12,lVar11,0);
  puVar7 = &DAT_100a81358;
  FUN_100004bb4(&DAT_100a81358,&DAT_1008154f0);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  uVar10 = 0;
  FUN_1002c2264();
  uVar5 = uVar10;
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x38) = uVar10;
  *(undefined ***)(puVar7 + 0x40) = &PTR_PTR_1009ad308;
  *(undefined8 *)(puVar7 + 0x20) = uVar5;
  *(undefined8 **)(lVar3 + -0x10) = &local_f0;
  *(undefined **)(lVar3 + -8) = puVar7;
  *(undefined8 *)(lVar3 + -0x20) = 0;
  *(undefined8 **)(lVar3 + -0x18) = &local_c0;
  FUN_1002e09cc(local_108,local_110,uVar9,0,0,0,0,&local_90);
  return;
}

