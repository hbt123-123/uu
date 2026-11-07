// rea decompile_all
// name: FUN_1003f6828
// address: 0x1003f6828
// body: available
// range: 0x1003f6828-0x1003f69c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f6828(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_90 [7];
  undefined1 local_89;
  ulong local_88;
  undefined8 local_80 [3];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100a8da78;
  FUN_100004bb4(&DAT_100a8da78,&DAT_100823ff0);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003f69c8();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_90 + -extraout_x8,&DAT_1009bc0e0,&DAT_1009bc0e0,param_1,uVar1,uVar2);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  local_80[0] = *(undefined8 *)(unaff_x20 + 0x10);
  local_88 = local_88 & 0xffffffffffffff00;
  puVar4 = &DAT_100a8da88;
  FUN_100004bb4(&DAT_100a8da88,&DAT_100823ff8);
  puVar5 = &DAT_100a8da90;
  FUN_1003f6ca0(&DAT_100a8da90,&DAT_100a8da98,&TargetProtocolConformanceDescriptor_1008240a8,
                PTR___sSayxGSEsSERzlMc_100995880);
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
            (local_80,&local_88,puVar3,puVar4,puVar5);
  if (unaff_x21 == 0) {
    _swift_beginAccess(unaff_x20 + 0x18,local_80,0,0);
    local_88 = *(ulong *)(unaff_x20 + 0x18);
    local_89 = 1;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_88,&local_89,puVar3,puVar4,puVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_90 + -extraout_x8,puVar3);
  return;
}

