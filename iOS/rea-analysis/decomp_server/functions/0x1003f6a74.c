// rea decompile_all
// name: FUN_1003f6a74
// address: 0x1003f6a74
// body: available
// range: 0x1003f6a74-0x1003f6c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003f6c18) */

void FUN_1003f6a74(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined *local_a0;
  long local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 local_78 [24];
  undefined8 local_58;
  
  puVar3 = &DAT_100a8daa0;
  FUN_100004bb4(&DAT_100a8daa0,&DAT_100824000);
  lVar6 = *(long *)(puVar3 + -8);
  local_a0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar7 = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar8 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_98 = param_1;
  FUN_10003f030(param_1,uVar5);
  FUN_1003f69c8();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_b0 + -extraout_x8,&DAT_1009bc0e0,&DAT_1009bc0e0,param_1,uVar5,uVar1);
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100a8da88;
    local_a8 = lVar6;
    FUN_100004bb4(&DAT_100a8da88,&DAT_100823ff8);
    local_78[0] = 0;
    puVar4 = &DAT_100a8daa8;
    FUN_1003f6ca0(&DAT_100a8daa8,&DAT_100a8dab0,&TargetProtocolConformanceDescriptor_100824080,
                  PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_90,puVar3,local_78,local_a0,puVar3,puVar4);
    _swift_beginAccess(puVar7,local_78,1,0);
    uVar5 = *puVar7;
    *puVar7 = CONCAT71(uStack_8f,local_90);
    _swift_bridgeObjectRelease(uVar5);
    puVar2 = local_a0;
    local_90 = 1;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,puVar3,&local_90,local_a0,puVar3,puVar4);
    (**(code **)(local_a8 + 8))(auStack_b0 + -extraout_x8,puVar2);
    _swift_beginAccess(puVar8,&local_90,1,0);
    uVar5 = *puVar8;
    *puVar8 = local_58;
    _swift_bridgeObjectRelease(uVar5);
  }
  else {
    _swift_release();
  }
  FUN_10003f094(local_98);
  return;
}

