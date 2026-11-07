// rea decompile_all
// name: FUN_1003783c0
// address: 0x1003783c0
// body: available
// range: 0x1003783c0-0x10037858f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010037848c) */
/* WARNING: Removing unreachable block (ram,0x0001003784f4) */
/* WARNING: Removing unreachable block (ram,0x000100378528) */
/* WARNING: Removing unreachable block (ram,0x0001003784c0) */

void FUN_1003783c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a890f0;
  FUN_100004bb4(&DAT_100a890f0,&DAT_10081d680);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_100378890();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&DAT_1009b5830,&DAT_1009b5830,lVar4,uVar1,uVar2
            );
  if (unaff_x21 == 0) {
    local_51 = 0;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&local_51,puVar3);
    local_52 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&local_52,puVar3);
    local_53 = 2;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&local_53,puVar3);
    local_54 = 3;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&local_54,puVar3);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return;
}

