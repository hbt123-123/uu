// rea decompile_all
// name: FUN_100022520
// address: 0x100022520
// body: available
// range: 0x100022520-0x10002275f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010002270c) */

undefined1  [16] FUN_100022520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 local_80;
  undefined *local_68;
  
  lVar2 = 0;
  local_80 = param_3;
  __s10Foundation11JSONEncoderC16OutputFormattingVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation11JSONEncoderC20DateEncodingStrategyOMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  (**(code **)(lVar11 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___s10Foundation11JSONEncoderC20DateEncodingStrategyO7iso8601yA2EmFWC_1000f07c0
             ,lVar3);
  __s10Foundation11JSONEncoderC20dateEncodingStrategyAC04DatedE0OvsTj(lVar13);
  puVar5 = &DAT_100101aa0;
  FUN_10000eb08(&DAT_100101aa0,&BYTE_1000cb6d0);
  lVar3 = *(long *)(lVar10 + 0x48);
  bVar1 = *(byte *)(lVar10 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar6 = puVar5;
  __s10Foundation11JSONEncoderC16OutputFormattingV13prettyPrintedAEvgZ
            (puVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)));
  __s10Foundation11JSONEncoderC16OutputFormattingV10sortedKeysAEvgZ
            (puVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) + lVar3);
  local_68 = puVar5;
  FUN_10002c8c4();
  puVar5 = &DAT_100101ab0;
  FUN_10000eb08(&DAT_100101ab0,&DAT_1000cf6e0);
  puVar7 = &DAT_100101ab8;
  FUN_10002cf3c(&DAT_100101ab8,&DAT_100101ab0,&DAT_1000cf6e0,PTR___sSayxGSTsMc_1000f0380);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar12,&local_68,puVar5,puVar7,lVar2,puVar6);
  __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvsTj(lVar12);
  uVar8 = param_1;
  FUN_10000eb08(param_1,param_2);
  uVar9 = local_80;
  FUN_10002cf3c(local_80,param_1,param_2,&TargetProtocolConformanceDescriptor_1000cb940);
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(unaff_x20,uVar8,uVar9);
  _swift_release(uVar4);
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = unaff_x20;
  return auVar14;
}

