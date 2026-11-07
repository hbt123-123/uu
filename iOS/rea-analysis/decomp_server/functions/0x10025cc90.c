// rea decompile_all
// name: FUN_10025cc90
// address: 0x10025cc90
// body: available
// range: 0x10025cc90-0x10025ce83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025cc90(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  dispatch_semaphore_t pdVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  long local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_78 = *(long *)(lVar1 + -8);
  puVar8 = auStack_80 + -(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_70 = lVar1;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar5 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  lVar9 = (long)puVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar1 = lVar9 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar3 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  FUN_100254330(0);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar1);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a80030;
  FUN_100005c90(&DAT_100a80030,puVar5,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar5 = &DAT_100a80038;
  FUN_100004bb4(&DAT_100a80038,&DAT_100814740);
  puVar6 = &DAT_100a80040;
  FUN_1000d61d8(&DAT_100a80040,&DAT_100a80038,&DAT_100814740);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&local_68,puVar5,puVar6,lVar2,puVar4);
  (**(code **)(local_78 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lStack_70);
  uVar3 = 0x5174736575716572;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0x5174736575716572,0xec00000065756575,lVar1,lVar9,puVar8,0);
  puVar5 = PTR___swiftEmptySetSingleton_100995eb0;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined **)(unaff_x20 + 0x28) = puVar5;
  pdVar7 = _dispatch_semaphore_create(1);
  *(dispatch_semaphore_t *)(unaff_x20 + 0x30) = pdVar7;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x38,0);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  return;
}

