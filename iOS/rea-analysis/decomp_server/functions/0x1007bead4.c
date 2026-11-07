// rea decompile_all
// name: FUN_1007bead4
// address: 0x1007bead4
// body: available
// range: 0x1007bead4-0x1007becd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007bec28) */

ID FUN_1007bead4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  long unaff_x20;
  long unaff_x21;
  ID IVar10;
  long lVar11;
  long local_90;
  undefined *local_88;
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar4 = &DAT_100abcc98;
  FUN_1007b4550();
  lVar3 = _TtC6Sentry17SentryMXCallStack::threadAttributed;
  IVar10 = *(ID *)(puVar4 + -8);
  lVar11 = (long)&local_90 - (*(long *)(IVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + _TtC6Sentry17SentryMXCallStack::threadAttributed) = 2;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = param_1;
  local_88 = puVar4;
  FUN_10003f030(param_1,uVar1);
  FUN_1007bfe08();
  local_90 = lVar11;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar11,&DAT_1009eb668,&DAT_1009eb668,lVar5,uVar1,uVar2);
  puVar4 = local_88;
  lVar5 = local_90;
  if (unaff_x21 == 0) {
    local_58 = 0;
    puVar6 = &local_58;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar6,local_88);
    *(char *)(unaff_x20 + lVar3) = (char)puVar6;
    puVar7 = &DAT_100abcca8;
    FUN_1007b4550(&DAT_100abcca8);
    local_68[0] = 1;
    puVar8 = &DAT_100abccb0;
    FUN_1007bfe90(&DAT_100abccb0,&DAT_100abccb8,&DAT_100852180,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar7,local_68,puVar4,puVar7,puVar8);
    *(ulong *)(unaff_x20 + _TtC6Sentry17SentryMXCallStack::callStackRootFrames) =
         CONCAT71(uStack_57,local_58);
    FUN_1007be95c();
    IVar9 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
    (**(code **)(IVar10 + 8))(lVar5,puVar4);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
    FUN_1007be95c(0);
    _swift_deallocPartialClassInstance();
    IVar9 = IVar10;
  }
  return IVar9;
}

