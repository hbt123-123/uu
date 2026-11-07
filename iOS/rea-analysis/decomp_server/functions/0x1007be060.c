// rea decompile_all
// name: FUN_1007be060
// address: 0x1007be060
// body: available
// range: 0x1007be060-0x1007be287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007be208) */
/* WARNING: Removing unreachable block (ram,0x0001007be178) */

ID FUN_1007be060(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ID unaff_x20;
  long unaff_x21;
  long lVar9;
  long local_90;
  undefined *local_88;
  undefined1 local_68 [8];
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar4 = &DAT_100abcc70;
  FUN_1007b4550();
  lVar9 = *(long *)(puVar4 + -8);
  lVar8 = (long)&local_90 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = param_1;
  local_88 = puVar4;
  FUN_10003f030(param_1,uVar1);
  FUN_1007bfdc4();
  local_90 = lVar8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar8,&DAT_1009eb6f8,&DAT_1009eb6f8,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar4 = &DAT_100abcc80;
    FUN_1007b4550(&DAT_100abcc80);
    local_68[0] = 0;
    puVar6 = &DAT_100abcc88;
    FUN_1007c0004(&DAT_100abcc88,&DAT_100abcc90,&TargetProtocolConformanceDescriptor_1008521d0,
                  PTR___sSayxGSesSeRzlMc_1009958a0);
    puVar3 = local_88;
    lVar5 = local_90;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar4,local_68,local_88,puVar4,puVar6);
    *(ulong *)(unaff_x20 + _TtC6Sentry21SentryMXCallStackTree::callStacks) =
         CONCAT71(uStack_57,local_58);
    local_58 = 1;
    puVar7 = &local_58;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar7,puVar3);
    *(byte *)(unaff_x20 + _TtC6Sentry21SentryMXCallStackTree::callStackPerThread) = (byte)puVar7 & 1
    ;
    FUN_1007bdee8();
    unaff_x20 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
    (**(code **)(lVar9 + 8))(lVar5,puVar3);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
    FUN_1007bdee8();
    _swift_deallocPartialClassInstance();
  }
  return unaff_x20;
}

