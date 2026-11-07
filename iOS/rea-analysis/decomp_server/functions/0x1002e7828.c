// rea decompile_all
// name: FUN_1002e7828
// address: 0x1002e7828
// body: available
// range: 0x1002e7828-0x1002e7ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002e7828(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  void *aBlock;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long alStack_f0 [4];
  long lStack_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  byte local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar7 = (long)alStack_f0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  alStack_f0[3] = *(long *)(lVar3 + -8);
  lVar8 = lVar7 - (*(long *)(alStack_f0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_d0 = lVar3;
  __s8Dispatch0A9PredicateOMa();
  lVar3 = *(long *)(lVar4 + -8);
  puVar9 = (undefined8 *)(lVar8 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  (**(code **)(lVar3 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar4);
  puVar5 = puVar9;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar3 + 8))(puVar9,lVar4);
  if (((ulong)puVar5 & 1) != 0) {
    FUN_1002b4348(param_1 + _TtC9Alamofire15DownloadRequest::downloadable,&local_90);
    if ((local_68 & 1) == 0) {
      FUN_1000a0074(&local_90,&local_c0);
      FUN_1002e7ae8(param_1,&local_c0);
      FUN_10003f094(&local_c0);
    }
    else {
      alStack_f0[2] = *(undefined8 *)(unaff_x20 + 0x20);
      puVar6 = &DAT_1009aec08;
      _swift_allocObject(&DAT_1009aec08,0x30,7);
      *(long *)(puVar6 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar6 + 0x18) = local_90;
      *(undefined8 *)(puVar6 + 0x20) = uStack_88;
      *(long *)(puVar6 + 0x28) = param_1;
      local_a0 = FUN_1002f0b04;
      local_c0 = PTR___NSConcreteStackBlock_100995490;
      local_b8 = 0x42000000;
      local_b0 = FUN_1000acdb4;
      puStack_a8 = &DAT_1009aec20;
      local_98 = puVar6;
      aBlock = __Block_copy(&local_c0);
      alStack_f0[1] = lVar10;
      _swift_retain();
      FUN_100008184(local_90,uStack_88);
      _swift_retain(param_1);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar5 = &DAT_100a82c10;
      FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar6 = &DAT_100a82c18;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar9 = &DAT_100a82c20;
      FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar7,&local_c8,puVar6,puVar9,lVar2,puVar5);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar8,lVar7,aBlock);
      __Block_release(aBlock);
      FUN_100006cdc(local_90,uStack_88);
      (**(code **)(alStack_f0[1] + 8))(lVar7,lVar2);
      (**(code **)(alStack_f0[3] + 8))(lVar8,lStack_d0);
      _swift_release(local_98);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e7ae8);
  (*pcVar1)();
}

