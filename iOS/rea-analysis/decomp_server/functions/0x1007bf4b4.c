// rea decompile_all
// name: FUN_1007bf4b4
// address: 0x1007bf4b4
// body: available
// range: 0x1007bf4b4-0x1007bf7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001007bf654) */
/* WARNING: Removing unreachable block (ram,0x0001007bf6cc) */

void FUN_1007bf4b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long local_90;
  undefined1 local_80 [8];
  undefined1 auStack_78 [24];
  ulong local_58;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar4 + -8);
  lVar11 = (long)&local_90 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100abccd8;
  FUN_1007b4550();
  local_90 = *(long *)(puVar5 + -8);
  lVar9 = lVar11 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  FUN_1007bfe4c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar9,&DAT_1009eb5d8,&DAT_1009eb5d8,param_1,uVar2,uVar3);
  lVar1 = unaff_x20 + _TtC6Sentry13SentryMXFrame::binaryUUID;
  _swift_beginAccess(lVar1,auStack_78,0,0);
  (**(code **)(lVar10 + 0x10))(lVar11,lVar1,lVar4);
  local_58 = local_58 & 0xffffffffffffff00;
  puVar6 = &DAT_100abcce0;
  FUN_100240fdc(&DAT_100abcce0,0xff,PTR___s10Foundation4UUIDVMa_100996230,
                PTR___s10Foundation4UUIDVSEAAMc_100996240);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (lVar11,&local_58,puVar5,lVar4,puVar6);
  if (unaff_x21 == 0) {
    (**(code **)(lVar10 + 8))(lVar11,lVar4);
    local_58._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF
              (*(undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::offsetIntoBinaryTextSegment),
               &local_58,puVar5);
    uVar2 = *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::binaryName);
    uVar3 = ((undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::binaryName))[1];
    local_58._0_1_ = 2;
    _swift_bridgeObjectRetain(uVar3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(uVar2,uVar3,&local_58,puVar5);
    _swift_bridgeObjectRelease(uVar3);
    local_58 = CONCAT71(local_58._1_7_,3);
    __ss22KeyedEncodingContainerV6encode_6forKeyys6UInt64V_xtKF
              (*(undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::address),&local_58,puVar5);
    local_58 = *(ulong *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::subFrames);
    local_80[0] = 4;
    puVar6 = &DAT_100abcca8;
    FUN_1007b4550(&DAT_100abcca8);
    puVar7 = &DAT_100abcce8;
    FUN_1007bfe90(&DAT_100abcce8,&DAT_100abccf0,&DAT_100852158,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_58,local_80,puVar5,puVar6,puVar7);
    lVar1 = local_90;
    local_58 = CONCAT71(local_58._1_7_,5);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (*(undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::sampleCount),
               *(undefined1 *)
                ((undefined8 *)(unaff_x20 + _TtC6Sentry13SentryMXFrame::sampleCount) + 1),&local_58,
               puVar5);
    pcVar8 = *(code **)(lVar1 + 8);
  }
  else {
    (**(code **)(lVar10 + 8))();
    pcVar8 = *(code **)(local_90 + 8);
  }
  (*pcVar8)(lVar9,puVar5);
  return;
}

