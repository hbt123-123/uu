// rea decompile_all
// name: FUN_10025b99c
// address: 0x10025b99c
// body: available
// range: 0x10025b99c-0x10025bcaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010025baa4) */
/* WARNING: Removing unreachable block (ram,0x00010025bc80) */
/* WARNING: Removing unreachable block (ram,0x00010025bae0) */
/* WARNING: Removing unreachable block (ram,0x00010025bc8c) */

void FUN_10025b99c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar2 = 0;
  local_c0 = param_3;
  __ss13EncodingErrorOMa();
  lVar9 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar2 + -8);
  puVar10 = auStack_d0 +
            (-(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0) -
            (lVar9 + 0xfU & 0xfffffffffffffff0));
  lVar9 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar9 + -8);
  lVar11 = (long)puVar10 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a807e0;
  lStack_b0 = lVar9;
  local_98 = param_1;
  FUN_100004bb4(&DAT_100a807e0,&DAT_100814f50);
  puVar4 = &DAT_100a807e8;
  FUN_10025fec0(&DAT_100a807e8,&DAT_100a807f0,&TargetProtocolConformanceDescriptor_100814b80,
                PTR___sSayxGSEsSERzlMc_100995880);
  ppuVar5 = &local_98;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar5,puVar3,puVar4);
  local_c8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar6 = &DAT_1009a8888;
  _swift_allocObject(&DAT_1009a8888,0x38,7);
  uVar1 = local_c0;
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = local_c0;
  *(long *)(puVar6 + 0x20) = unaff_x20;
  *(undefined ***)(puVar6 + 0x28) = ppuVar5;
  *(undefined **)(puVar6 + 0x30) = puVar3;
  local_78 = FUN_10025ff88;
  local_98 = PTR___NSConcreteStackBlock_100995490;
  local_90 = 0x42000000;
  local_88 = FUN_1000acdb4;
  puStack_80 = &DAT_1009a88a0;
  local_70 = puVar6;
  aBlock = __Block_copy(&local_98);
  FUN_10004090c(param_2,uVar1);
  _swift_retain();
  FUN_100008184(ppuVar5,puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a80cc0;
  FUN_100005c90(&DAT_100a80cc0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar7 = &DAT_100a80cc8;
  FUN_100004bb4(&DAT_100a80cc8,&DAT_100814f60);
  puVar8 = &DAT_100a80cd0;
  FUN_1000d61d8(&DAT_100a80cd0,&DAT_100a80cc8,&DAT_100814f60);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar10,&local_a0,puVar7,puVar8,lVar2,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,puVar10,aBlock);
  __Block_release(aBlock);
  FUN_100006cdc(ppuVar5,puVar3);
  (**(code **)(local_a8 + 8))(puVar10,lVar2);
  (**(code **)(local_b8 + 8))(lVar11,lStack_b0);
  _swift_release(local_70);
  return;
}

