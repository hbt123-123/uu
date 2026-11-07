// rea decompile_all
// name: FUN_1001c4928
// address: 0x1001c4928
// body: available
// range: 0x1001c4928-0x1001c4a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001c49f0) */

undefined1 * FUN_1001c4928(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined1 local_60 [16];
  
  puVar2 = &DAT_100a7d0d8;
  FUN_100004bb4(&DAT_100a7d0d8,&DAT_100811da0);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined1 **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,puVar4);
  FUN_1001c5574();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&DAT_1009a2f10,&DAT_1009a2f10,lVar3,puVar4,uVar1);
  if (unaff_x21 == 0) {
    local_60[0] = 0;
    puVar4 = local_60;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar4,puVar2);
    local_61 = 1;
    puVar5 = puVar4;
    FUN_1001c55b4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_60,&DAT_1009a3018,&local_61,puVar2,&DAT_1009a3018,puVar5);
    (**(code **)(lVar6 + 8))(auStack_70 + -extraout_x8,puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return puVar4;
}

