// rea decompile_all
// name: FUN_100559130
// address: 0x100559130
// body: available
// range: 0x100559130-0x1005594b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100559130(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_120 [8];
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar12 = *(long *)(param_3 + -8);
  uVar8 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar14 = auStack_120 + -uVar8;
  lVar11 = (long)puVar14 - uVar8;
  local_118 = param_4;
  FUN_100557cc0(param_2);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar5 = param_3;
  _swift_conformsToProtocol(param_3,&TargetProtocolDescriptor_10090176c);
  local_110 = uVar10;
  if ((param_3 == 0) || (lVar5 == 0)) {
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar9);
    local_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
  }
  else {
    pcVar13 = *(code **)(lVar5 + 8);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar9);
    (*pcVar13)(&local_a0,param_3,lVar5);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x10) = local_a0;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x30) = local_80;
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1005b9e0c();
  local_108 = uVar9;
  _swift_bridgeObjectRelease(uVar9);
  *(undefined **)(unaff_x20 + 0x40) = puVar6;
  pcVar13 = *(code **)(lVar12 + 0x10);
  (*pcVar13)(lVar11,param_1,param_3);
  puVar6 = &DAT_100aab448;
  FUN_100004bb4(&DAT_100aab448,&DAT_100837b00);
  puVar7 = &local_d0;
  _swift_dynamicCast(puVar7,lVar11,param_3,puVar6,0xe);
  lVar5 = local_b0;
  uVar9 = local_b8;
  if ((int)puVar7 == 0) {
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    FUN_100040bb4(&local_d0,&DAT_100aab450,&DAT_1008388b0);
    uVar9 = 0;
  }
  else {
    FUN_10003f030(&local_d0,local_b8);
    (**(code **)(lVar5 + 0x10))(uVar9,lVar5);
    FUN_10003f094(&local_d0);
  }
  uVar10 = local_110;
  _swift_bridgeObjectRelease(local_110);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar9;
  FUN_1004f9e80(" {\n",3);
  if (DAT_100aa26b8 != -1) {
    _swift_once(&DAT_100aa26b8,FUN_100556110);
  }
  _swift_bridgeObjectRetain(DAT_100aabac0);
  FUN_1004fa13c();
  (*pcVar13)(puVar14,param_1,param_3);
  puVar7 = &local_d0;
  _swift_dynamicCast(puVar7,puVar14,param_3,&DAT_1009d2420,6);
  uVar4 = local_c0;
  uVar3 = uStack_c8;
  uVar9 = local_d0;
  if ((int)puVar7 == 0) {
    (**(code **)(local_118 + 0x48))();
    if (unaff_x21 != 0) {
      _swift_unexpectedError(unaff_x21,"SwiftProtobuf/TextFormatEncodingVisitor.swift",0x2d,1,0x121)
      ;
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1005594b4);
      (*pcVar13)();
    }
  }
  else {
    FUN_1004f79f4();
    FUN_1005735b0();
    if (unaff_x21 != 0) {
      _swift_unexpectedError
                (unaff_x21,"SwiftProtobuf/Google_Protobuf_Any+Extensions.swift",0x32,1,0x84);
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100559494);
      (*pcVar13)();
    }
    FUN_100006cdc(uVar9,uVar3);
    _swift_release(uVar4);
  }
  FUN_1005564b4();
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x48) = uVar10;
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = local_108;
  FUN_10052a5d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x18) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return;
}

