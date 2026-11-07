// rea decompile_all
// name: FUN_1003f46e8
// address: 0x1003f46e8
// body: available
// range: 0x1003f46e8-0x1003f483b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003f47ac) */

undefined1  [16] FUN_1003f46e8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *unaff_x21;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100a8d7b8;
  FUN_100004bb4(&DAT_100a8d7b8,&DAT_100823c10);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined1 **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,puVar4);
  FUN_1003f45bc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&DAT_1009bbb30,&DAT_1009bbb30,lVar3,puVar4,uVar1);
  if (unaff_x21 == (undefined1 *)0x0) {
    local_51 = 0;
    unaff_x21 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(unaff_x21,puVar2);
    local_52 = 1;
    puVar4 = &local_52;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt16VAFm_xtKF(puVar4,puVar2);
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = unaff_x21;
  return auVar6;
}

