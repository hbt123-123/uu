// rea decompile_all
// name: FUN_1007bf1f4
// address: 0x1007bf1f4
// body: available
// range: 0x1007bf1f4-0x1007bf2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001007bf6cc) */

undefined1  [16] FUN_1007bf1f4(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  TargetClassDescriptor *pTVar4;
  undefined8 uVar5;
  TargetClassDescriptor *pTVar6;
  TargetClassDescriptor *pTVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  TargetClassDescriptor *op;
  undefined **ppuVar12;
  code *pcVar13;
  TargetClassDescriptor *unaff_x19;
  TargetClassDescriptor *unaff_x20;
  undefined *unaff_x21;
  TargetClassDescriptor *unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  TargetClassDescriptor *unaff_x25;
  TargetClassDescriptor *unaff_x26;
  TargetClassDescriptor *unaff_x27;
  long lVar14;
  undefined *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar15;
  undefined8 unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long in_stack_00000000;
  undefined *in_stack_00000008;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_30 [8];
  undefined1 *puVar11;
  
  op = (TargetClassDescriptor *)&SUB_80000001008dad60;
  pTVar4 = (TargetClassDescriptor *)0xd00000000000001b;
  ppuVar12 = (undefined **)(param_1 & 0xff);
  pTVar6 = pTVar4;
  pTVar7 = unaff_x20;
  puVar15 = unaff_x29;
  switch(ppuVar12) {
  default:
    op = (TargetClassDescriptor *)0x4449;
  case (undefined **)0xc8:
  case (undefined **)0xd6:
  case (undefined **)0xf0:
  case (undefined **)0xfe:
    op = (TargetClassDescriptor *)((ulong)op & 0xffffffffffff | 0xea00000000000000);
    pTVar4 = (TargetClassDescriptor *)0x6962;
  case (undefined **)0xc6:
  case (undefined **)0xee:
    pTVar4 = (TargetClassDescriptor *)((ulong)pTVar4 & 0xffffffffffff | 0x55557972616e0000);
switchD_1007bf228_caseD_1:
    auVar16._8_8_ = op;
    auVar16._0_8_ = pTVar4;
    return auVar16;
  case (undefined **)0x1:
    goto switchD_1007bf228_caseD_1;
  case (undefined **)0x2:
  case (undefined **)0x80:
  case (undefined **)0x98:
  case (undefined **)0xb0:
    op = (TargetClassDescriptor *)0x656d;
  case (undefined **)0x88:
  case (undefined **)0x90:
    op = (TargetClassDescriptor *)((ulong)op & 0xffffffffffff | 0xea00000000000000);
  case (undefined **)0x6:
  case (undefined **)0x10:
  case (undefined **)0xa0:
    pTVar4 = (TargetClassDescriptor *)0x6962;
  case (undefined **)0xa:
  case (undefined **)0x14:
    pTVar4 = (TargetClassDescriptor *)((ulong)pTVar4 | 0x616e0000);
  case (undefined **)0xbe:
  case (undefined **)0xe6:
    pTVar4 = (TargetClassDescriptor *)((ulong)pTVar4 | 0x797200000000);
switchD_1007bf228_caseD_8:
    auVar17._0_8_ = (ulong)pTVar4 & 0xffffffffffff | 0x614e000000000000;
    auVar17._8_8_ = op;
    return auVar17;
  case (undefined **)0x3:
  case (undefined **)0x9:
  case (undefined **)0x13:
    op = (TargetClassDescriptor *)0xe700000000000000;
  case (undefined **)0xd:
  case (undefined **)0x17:
    pTVar4 = (TargetClassDescriptor *)0x6461;
switchD_1007bf228_caseD_b:
    auVar18._0_8_ = (ulong)pTVar4 & 0xffffffffffff | 0x73736572640000;
    auVar18._8_8_ = op;
    return auVar18;
  case (undefined **)0x4:
  case (undefined **)0xf:
  case (undefined **)0x19:
    op = (TargetClassDescriptor *)0xe900000000000073;
    pTVar4 = (TargetClassDescriptor *)0x617246627573;
  case (undefined **)0xba:
  case (undefined **)0xce:
  case (undefined **)0xe2:
  case (undefined **)0xf6:
    auVar19._0_8_ = (ulong)pTVar4 & 0xffffffffffff | 0x656d000000000000;
    auVar19._8_8_ = op;
    return auVar19;
  case (undefined **)0x5:
  case (undefined **)0xe:
  case (undefined **)0x18:
    op = (TargetClassDescriptor *)0xeb00000000746e75;
    pTVar4 = (TargetClassDescriptor *)0x706d6173;
  case (undefined **)0xb2:
    pTVar4 = (TargetClassDescriptor *)((ulong)pTVar4 | 0x656c00000000);
switchD_1007bf228_caseD_82:
    auVar20._0_8_ = (ulong)pTVar4 & 0xffffffffffff | 0x6f43000000000000;
    auVar20._8_8_ = op;
    return auVar20;
  case (undefined **)0x8:
  case (undefined **)0x12:
  case (undefined **)0xdd:
    goto switchD_1007bf228_caseD_8;
  case (undefined **)0xb:
  case (undefined **)0x15:
  case (undefined **)0x70:
  case (undefined **)0x78:
  case (undefined **)0xa8:
    goto switchD_1007bf228_caseD_b;
  case (undefined **)0x1a:
  case (undefined **)0x30:
  case (undefined **)0x3c:
  case (undefined **)0x50:
  case (undefined **)0x5c:
  case (undefined **)0x62:
  case (undefined **)0x41:
  case (undefined **)0xdc:
    ppuVar12 = (undefined **)_TtC6Sentry13SentryMXFrame::binaryUUID;
    unaff_x19 = pTVar4;
  case (undefined **)0x37:
  case (undefined **)0x57:
  case (undefined **)0x69:
    unaff_x20 = (TargetClassDescriptor *)
                ((long)&((TargetClassDescriptor *)((long)ppuVar12 + -0x3000000000000008))->
                        NumImmediateMembers + 3);
    pTVar4 = (TargetClassDescriptor *)0x0;
    __s10Foundation4UUIDVMa();
    op = pTVar4;
  case (undefined **)0xe4:
    (**(code **)(*(long *)&pTVar4[-1].NumFields + 8))(unaff_x20,op);
    ppuVar12 = (undefined **)&DAT_100b3a000;
  case (undefined **)0x39:
  case (undefined **)0x3e:
  case (undefined **)0x59:
  case (undefined **)0x5e:
  case (undefined **)0x6c:
    ppuVar12 = (undefined **)
               ((long)&(unaff_x19->TargetTypeContextDescriptor).TargetContextDescriptor.Flags.
                       field_0x0 +
               *(long *)&(((TargetClassDescriptor *)((long)ppuVar12 + 0x8c4))->
                         TargetTypeContextDescriptor).AccessFunctionPtr);
  case (undefined **)0x3f:
  case (undefined **)0x5f:
    uVar5._0_4_ = (((TargetClassDescriptor *)ppuVar12)->TargetTypeContextDescriptor).Name;
    uVar5._4_4_ = (((TargetClassDescriptor *)ppuVar12)->TargetTypeContextDescriptor).
                  AccessFunctionPtr;
    _swift_bridgeObjectRelease(uVar5);
switchD_1007bf228_caseD_1b:
    uVar9 = *(undefined8 *)
             ((long)&(unaff_x19->TargetTypeContextDescriptor).TargetContextDescriptor.Flags.
                     field_0x0 + _TtC6Sentry13SentryMXFrame::subFrames);
    _swift_bridgeObjectRelease(uVar9);
    auVar24._8_8_ = op;
    auVar24._0_8_ = uVar9;
    return auVar24;
  case (undefined **)0x1b:
  case (undefined **)0x31:
  case (undefined **)0x43:
  case (undefined **)0x44:
  case (undefined **)0x51:
  case (undefined **)0x63:
  case (undefined **)0x6e:
    goto switchD_1007bf228_caseD_1b;
  case (undefined **)0x1d:
  case (undefined **)0x33:
  case (undefined **)0x3d:
  case (undefined **)0x53:
  case (undefined **)0x5d:
  case (undefined **)0x65:
    goto switchD_1007bf228_caseD_1d;
  case (undefined **)0x1f:
  case (undefined **)0x35:
  case (undefined **)0x55:
  case (undefined **)0x67:
    goto switchD_1007bf228_caseD_1f;
  case (undefined **)0x36:
  case (undefined **)0x56:
  case (undefined **)0x68:
    goto switchD_1007bf228_caseD_36;
  case (undefined **)0x38:
  case (undefined **)0x58:
    puVar11 = &SUB_80000001008db140;
    uVar9 = 0;
    switchD_1007bf228::caseD_6a(0,&SUB_80000001008db140);
    auVar22._8_8_ = puVar11;
    auVar22._0_8_ = uVar9;
    return auVar22;
  case (undefined **)0x40:
  case (undefined **)0x60:
    pTVar4 = (TargetClassDescriptor *)0x0;
  case (undefined **)0x3a:
  case (undefined **)0x3b:
  case (undefined **)0x5a:
  case (undefined **)0x5b:
    switchD_1007bf228::caseD_6d(pTVar4);
    auVar25._8_8_ = op;
    auVar25._0_8_ = pTVar4;
    return auVar25;
  case (undefined **)0x6a:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    (*(code *)&SUB_80000001008dad60)();
    ppuVar12 = &PTR_s_debugDescription_100a5e000;
  case (undefined **)0xbd:
  case (undefined **)0xe5:
    op = *(TargetClassDescriptor **)
          &(((TargetClassDescriptor *)((long)ppuVar12 + 0x2c))->TargetTypeContextDescriptor).
           AccessFunctionPtr;
switchD_1007bf228_caseD_36:
    auVar23._0_8_ = _objc_msgSendSuper2((objc_super *)register0x00000008,(SEL)op);
    auVar23._8_8_ = op;
    return auVar23;
  case (undefined **)0x6d:
  case (undefined **)0x1c:
  case (undefined **)0x32:
  case (undefined **)0x52:
  case (undefined **)0x64:
    pTVar6 = DAT_100abcc60;
    ppuVar12 = (undefined **)pTVar4;
  case (undefined **)0x1e:
  case (undefined **)0x34:
  case (undefined **)0x42:
  case (undefined **)0x54:
  case (undefined **)0x66:
  case (undefined **)0x6b:
    pTVar4 = (TargetClassDescriptor *)ppuVar12;
    if (pTVar6 == (TargetClassDescriptor *)0x0) {
      op = &TargetClassDescriptor_100906de0;
switchD_1007bf228_caseD_1f:
      _swift_getSingletonMetadata(pTVar4,op);
      auVar27._8_8_ = op;
      auVar27._0_8_ = pTVar4;
      return auVar27;
    }
    op = (TargetClassDescriptor *)0x0;
switchD_1007bf228_caseD_1d:
    auVar26._8_8_ = op;
    auVar26._0_8_ = pTVar6;
    return auVar26;
  case (undefined **)0x82:
  case (undefined **)0x9a:
    goto switchD_1007bf228_caseD_82;
  case (undefined **)0x84:
  case (undefined **)0x9c:
    goto switchD_1007bf228_caseD_84;
  case (undefined **)0x85:
  case (undefined **)0x86:
  case (undefined **)0x9d:
  case (undefined **)0x9e:
  case (undefined **)0xd3:
  case (undefined **)0xfb:
switchD_1007bf228_caseD_85:
    uVar9 = *(undefined8 *)
             ((long)&(unaff_x27->TargetTypeContextDescriptor).TargetContextDescriptor.Flags.
                     field_0x0 +
             (long)&(((TargetClassDescriptor *)ppuVar12)->TargetTypeContextDescriptor).
                    TargetContextDescriptor.Flags.field_0x0);
    *(undefined1 *)(puVar15 + -9) = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(uVar9,puVar15 + -9,unaff_x28);
    if (unaff_x24 == (undefined *)0x0) {
      puVar1 = (undefined8 *)
               ((long)&(unaff_x27->TargetTypeContextDescriptor).TargetContextDescriptor.Flags.
                       field_0x0 + _TtC6Sentry13SentryMXFrame::binaryName);
      uVar9 = *puVar1;
      uVar2 = puVar1[1];
      *(undefined1 *)(puVar15 + -9) = 2;
      _swift_bridgeObjectRetain(uVar2);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
                (uVar9,uVar2,puVar15 + -9,unaff_x28);
      _swift_bridgeObjectRelease(uVar2);
      uVar9 = *(undefined8 *)
               ((long)&(unaff_x27->TargetTypeContextDescriptor).TargetContextDescriptor.Flags.
                       field_0x0 + _TtC6Sentry13SentryMXFrame::address);
      *(undefined1 *)(puVar15 + -9) = 3;
      __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF(uVar9,puVar15 + -9,unaff_x28);
      puVar15[-9] = *(undefined8 *)
                     ((long)&(unaff_x27->TargetTypeContextDescriptor).TargetContextDescriptor.Flags.
                             field_0x0 + _TtC6Sentry13SentryMXFrame::subFrames);
      *(undefined1 *)(puVar15 + -0xe) = 4;
      puVar8 = &DAT_100abcca8;
      FUN_1007b4550(&DAT_100abcca8);
      puVar10 = &DAT_100abcce8;
      FUN_1007bfe90(&DAT_100abcce8,&DAT_100abccf0,&DAT_100852158,PTR___sSayxGSEsSERzlMc_100995880);
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
                (puVar15 + -9,puVar15 + -0xe,unaff_x28,puVar8,puVar10);
      lVar14 = puVar15[-0x10];
      puVar1 = (undefined8 *)
               ((long)&(unaff_x27->TargetTypeContextDescriptor).TargetContextDescriptor.Flags.
                       field_0x0 + _TtC6Sentry13SentryMXFrame::sampleCount);
      uVar9 = *puVar1;
      uVar3 = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)(puVar15 + -9) = 5;
      __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
                (uVar9,uVar3,puVar15 + -9,unaff_x28);
      pcVar13 = *(code **)(lVar14 + 8);
    }
    else {
      pcVar13 = *(code **)(puVar15[-0x10] + 8);
    }
    break;
  case (undefined **)0x87:
  case (undefined **)0x9f:
    pTVar6 = (TargetClassDescriptor *)0x13f;
    __s10Foundation4UUIDVMa();
    in_CY = (TargetClassDescriptor *)0x3e < op;
    in_ZR = op == (TargetClassDescriptor *)0x3f;
    unaff_x19 = pTVar4;
  case (undefined **)0xbc:
    pTVar4 = pTVar6;
    if ((bool)in_CY && !(bool)in_ZR) {
      op = (TargetClassDescriptor *)0x3f;
    }
    else {
      in_stack_00000000 = *(long *)&pTVar4[-1].NumFields + 0x40;
      in_stack_00000008 = PTR___sBi64_WV_100995738 + 0x40;
switchD_1007bf228_caseD_f8:
switchD_1007bf228_caseD_f4:
switchD_1007bf228_caseD_b9:
      pTVar4 = unaff_x19;
      op = (TargetClassDescriptor *)0x100;
      _swift_updateClassMetadata2(pTVar4,0x100,6);
switchD_1007bf228_caseD_e0:
      if (pTVar4 == (TargetClassDescriptor *)0x0) {
        pTVar4 = (TargetClassDescriptor *)0x0;
        op = (TargetClassDescriptor *)0x0;
      }
    }
    auVar28._8_8_ = op;
    auVar28._0_8_ = pTVar4;
    return auVar28;
  case (undefined **)0xb9:
  case (undefined **)0xcd:
  case (undefined **)0xe1:
  case (undefined **)0xf5:
    goto switchD_1007bf228_caseD_b9;
  case (undefined **)0xcc:
    puVar15 = &stack0x00000050;
    register0x00000008 = (BADSPACEBASE *)auStack_30;
    unaff_x25 = (TargetClassDescriptor *)0x0;
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
    __s10Foundation4UUIDVMa();
    unaff_x23._0_4_ = unaff_x25[-1].NumFields;
    unaff_x23._4_4_ = unaff_x25[-1].FieldOffsetVectorOffset;
    pTVar7 = pTVar4;
    unaff_x22 = unaff_x20;
  case (undefined **)0xb8:
    unaff_x26 = (TargetClassDescriptor *)
                ((long)register0x00000008 +
                -(*(long *)(unaff_x23 + 0x40) + 0xfU & 0xfffffffffffffff0));
    unaff_x24 = &DAT_100abccd8;
    FUN_1007b4550();
    lVar14 = *(long *)(unaff_x24 + -8);
    puVar15[-0x10] = lVar14;
    unaff_x19 = (TargetClassDescriptor *)
                ((long)unaff_x26 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
    uVar9._0_4_ = pTVar7->MetadataNegativeSizeInWords_ResilientMetadataBounds;
    uVar9._4_4_ = pTVar7->MetadataPositiveSizeInWords_ExtraClassFlags;
    uVar2._0_4_ = pTVar7->NumImmediateMembers;
    uVar2._4_4_ = pTVar7->NumFields;
    FUN_10003f030(pTVar7,uVar9);
    FUN_1007bfe4c();
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (unaff_x19,&DAT_1009eb5d8,&DAT_1009eb5d8,pTVar7,uVar9,uVar2);
    unaff_x20 = (TargetClassDescriptor *)
                ((long)&(unaff_x22->TargetTypeContextDescriptor).TargetContextDescriptor.Flags.
                        field_0x0 +
                (long)&(_TtC6Sentry13SentryMXFrame::binaryUUID->TargetTypeContextDescriptor).
                       TargetContextDescriptor.Flags.field_0x0);
    _swift_beginAccess(unaff_x20,puVar15 + -0xd,0,0);
    unaff_x27 = unaff_x22;
    unaff_x28 = unaff_x24;
switchD_1007bf228_caseD_f9:
    ppuVar12 = *(undefined ***)(unaff_x23 + 0x10);
switchD_1007bf228_caseD_d1:
    pTVar4 = unaff_x26;
    op = unaff_x25;
    (*(code *)ppuVar12)(pTVar4,unaff_x20,op);
    *(undefined1 *)(puVar15 + -9) = 0;
    puVar8 = &DAT_100abcce0;
    FUN_100240fdc(&DAT_100abcce0,0xff,PTR___s10Foundation4UUIDVMa_100996230,
                  PTR___s10Foundation4UUIDVSEAAMc_100996240);
    unaff_x21 = (undefined *)puVar15[-0xf];
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (pTVar4,puVar15 + -9,unaff_x24,op,puVar8);
    ppuVar12 = *(undefined ***)(unaff_x23 + 8);
    unaff_x22 = unaff_x19;
    unaff_x24 = unaff_x21;
switchD_1007bf228_caseD_d2:
    if (unaff_x21 == (undefined *)0x0) {
      (*(code *)ppuVar12)(pTVar4,op);
      ppuVar12 = (undefined **)&DAT_100b3a000;
switchD_1007bf228_caseD_84:
      ppuVar12 = *(undefined ***)
                  &(((TargetClassDescriptor *)((long)ppuVar12 + 0x8c4))->TargetTypeContextDescriptor
                   ).TargetContextDescriptor.Parent;
      goto switchD_1007bf228_caseD_85;
    }
    (*(code *)ppuVar12)();
    pcVar13 = *(code **)(puVar15[-0x10] + 8);
    break;
  case (undefined **)0xd1:
    goto switchD_1007bf228_caseD_d1;
  case (undefined **)0xd2:
  case (undefined **)0xfa:
    goto switchD_1007bf228_caseD_d2;
  case (undefined **)0xde:
    op = pTVar4;
    FUN_1007bfe4c();
    unaff_x19 = pTVar4;
  case (undefined **)0xd0:
    __ss9CodingKeyPsE16debugDescriptionSSvg(unaff_x19,op);
    auVar21._8_8_ = op;
    auVar21._0_8_ = unaff_x19;
    return auVar21;
  case (undefined **)0xe0:
    goto switchD_1007bf228_caseD_e0;
  case (undefined **)0xf4:
    goto switchD_1007bf228_caseD_f4;
  case (undefined **)0xf8:
    goto switchD_1007bf228_caseD_f8;
  case (undefined **)0xf9:
    goto switchD_1007bf228_caseD_f9;
  }
  (*pcVar13)(unaff_x22,unaff_x28);
  auVar29._8_8_ = unaff_x28;
  auVar29._0_8_ = unaff_x22;
  return auVar29;
}

