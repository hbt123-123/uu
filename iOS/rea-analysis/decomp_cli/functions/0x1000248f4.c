// rea decompile_all
// name: FUN_1000248f4
// address: 0x1000248f4
// body: available
// range: 0x1000248f4-0x100024b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000248f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  
  puVar2 = &DAT_100102d58;
  FUN_10000eb08(&DAT_100102d58,&DAT_1000cf8e8);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation11JSONDecoderC20DateDecodingStrategyOMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  (**(code **)(lVar9 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___s10Foundation11JSONDecoderC20DateDecodingStrategyO7iso8601yA2EmFWC_1000f0798
             ,lVar3);
  __s10Foundation11JSONDecoderC20dateDecodingStrategyAC04DatedE0OvsTj(lVar8);
  puVar2 = &DAT_100102d50;
  FUN_10000eb08(&DAT_100102d50,&DAT_1000cf8e0);
  puVar5 = &DAT_100102d60;
  FUN_10002cf3c(&DAT_100102d60,&DAT_100102d50,&DAT_1000cf8e0,
                &TargetProtocolConformanceDescriptor_1000cb918);
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (puVar7,puVar2,param_2,param_3,puVar2,puVar5);
  if (unaff_x21 == 0) {
    _swift_release(uVar4);
    (**(code **)(*(long *)(puVar2 + -8) + 0x38))(puVar7,0,1,puVar2);
    FUN_100010128(puVar7,param_1,&DAT_100102d50,&DAT_1000cf8e0);
  }
  else {
    _swift_errorRelease();
    (**(code **)(*(long *)(puVar2 + -8) + 0x38))(puVar7,1,1,puVar2);
    FUN_10001fc18(puVar7,&DAT_100102d58,&DAT_1000cf8e8);
    puVar6 = (undefined4 *)0x69;
    FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,DAT_100105680);
    FUN_1000607a4();
    uVar1 = *puVar6;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar6,0,0);
    *puVar6 = uVar1;
    _swift_willThrow();
    _swift_release(uVar4);
  }
  return;
}

