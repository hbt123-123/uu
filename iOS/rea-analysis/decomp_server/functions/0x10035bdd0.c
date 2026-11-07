// rea decompile_all
// name: FUN_10035bdd0
// address: 0x10035bdd0
// body: available
// range: 0x10035bdd0-0x10035bfcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035bdd0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_80 = *(long *)(lVar2 + -8);
  puVar11 = auStack_90 + -(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_78 = lVar2;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar12 = (long)puVar11 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = lVar12 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar10 = lVar13 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100a88738;
  uVar4 = 0;
  FUN_10004003c(0,&DAT_100a88738,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  local_88 = uVar4;
  __s10Foundation4UUIDVACycfC(lVar10);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar9 + 8))(lVar10,lVar2);
  local_70 = (undefined *)0xd00000000000001f;
  uStack_68 = 0x80000001008abc40;
  __sSS6appendyySSF(uVar4,puVar8);
  _swift_bridgeObjectRelease(puVar8);
  uVar4 = uStack_68;
  puVar1 = local_70;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a88740;
  FUN_100005c90(&DAT_100a88740,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar6 = &DAT_100a88748;
  FUN_100004bb4(&DAT_100a88748,&DAT_10081c5f0);
  puVar7 = puVar6;
  FUN_10035c09c();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar12,&local_70,puVar6,puVar7,lVar3,puVar5);
  (**(code **)(local_80 + 0x68))
            (puVar11,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lStack_78);
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (puVar1,uVar4,lVar13,lVar12,puVar11,0);
  return;
}

