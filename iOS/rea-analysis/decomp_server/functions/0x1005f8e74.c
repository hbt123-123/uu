// rea decompile_all
// name: FUN_1005f8e74
// address: 0x1005f8e74
// body: available
// range: 0x1005f8e74-0x1005f9037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f8f60) */

void FUN_1005f8e74(long param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  long local_70;
  undefined1 local_68 [8];
  undefined1 local_58 [6];
  undefined1 local_52;
  undefined1 local_51;
  
  FUN_100004bb4(param_2,param_3);
  lVar6 = *(long *)(param_2 + -8);
  local_70 = param_2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar1);
  (*param_4)();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (local_68 + (-8 - extraout_x8),param_5,param_5,lVar3,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    FUN_1005fc674();
    lVar3 = local_70;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_58,&DAT_1009dc358,&local_51,local_70,&DAT_1009dc358,param_5);
    puVar4 = &DAT_100aaf010;
    FUN_100004bb4(&DAT_100aaf010,&BYTE_100845020);
    local_52 = 1;
    puVar5 = &DAT_100aaf838;
    FUN_1005fc6b4(&DAT_100aaf838,FUN_1005fc674,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_68,puVar4,&local_52,lVar3,puVar4,puVar5);
    (**(code **)(lVar6 + 8))(local_68 + (-8 - extraout_x8),lVar3);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return;
}

