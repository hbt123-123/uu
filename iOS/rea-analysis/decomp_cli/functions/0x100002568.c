// rea decompile_all
// name: FUN_100002568
// address: 0x100002568
// body: available
// range: 0x100002568-0x100002783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100002730) */

undefined1  [16] FUN_100002568(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_70 [8];
  undefined *local_68;
  
  lVar2 = 0;
  __s10Foundation11JSONEncoderC16OutputFormattingVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation11JSONEncoderC20DateEncodingStrategyOMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  (**(code **)(lVar9 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___s10Foundation11JSONEncoderC20DateEncodingStrategyO7iso8601yA2EmFWC_1000f07c0
             ,lVar3);
  __s10Foundation11JSONEncoderC20dateEncodingStrategyAC04DatedE0OvsTj(lVar10);
  puVar5 = &DAT_100101aa0;
  FUN_10000eb08(&DAT_100101aa0,&BYTE_1000cb6d0);
  lVar3 = *(long *)(lVar11 + 0x48);
  bVar1 = *(byte *)(lVar11 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  __s10Foundation11JSONEncoderC16OutputFormattingV13prettyPrintedAEvgZ
            (puVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)));
  __s10Foundation11JSONEncoderC16OutputFormattingV10sortedKeysAEvgZ
            (puVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) + lVar3);
  puVar6 = &DAT_100101aa8;
  local_68 = puVar5;
  FUN_10000ec04(&DAT_100101aa8,PTR___s10Foundation11JSONEncoderC16OutputFormattingVMa_1000f07a0,
                PTR___s10Foundation11JSONEncoderC16OutputFormattingVs10SetAlgebraAAMc_1000f07b8);
  puVar5 = &DAT_100101ab0;
  FUN_10000eb08(&DAT_100101ab0,&DAT_1000cf6e0);
  puVar7 = puVar5;
  FUN_10000ec44();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar8,&local_68,puVar5,puVar7,lVar2,puVar6);
  __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvsTj(puVar8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000cb940,param_1);
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj();
  _swift_release(uVar4);
  auVar12._8_8_ = param_1;
  auVar12._0_8_ = unaff_x20;
  return auVar12;
}

