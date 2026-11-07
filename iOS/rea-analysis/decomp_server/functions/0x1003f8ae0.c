// rea decompile_all
// name: FUN_1003f8ae0
// address: 0x1003f8ae0
// body: available
// range: 0x1003f8ae0-0x1003f8cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003f8c58) */

void FUN_1003f8ae0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_60 [10];
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8de28;
  FUN_100004bb4(&DAT_100a8de28,&DAT_100824590);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_60 + -extraout_x8;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar5);
  FUN_1003f9350();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar7,&DAT_1009bc240,&DAT_1009bc240,param_1,uVar5,uVar1);
  local_51 = 0;
  __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySbSg_xtKF(*unaff_x20,&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySbSg_xtKF(unaff_x20[1],&local_52,puVar3);
    local_53 = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySbSg_xtKF(unaff_x20[2],&local_53,puVar3);
    local_54 = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySbSg_xtKF(unaff_x20[3],&local_54,puVar3);
    local_55 = 4;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySbSg_xtKF(unaff_x20[4],&local_55,puVar3);
    lVar4 = 0;
    FUN_1003f84d4();
    iVar2 = *(int *)(lVar4 + 0x24);
    local_56 = 5;
    uVar5 = 0;
    __s10Foundation4DateVMa(0);
    puVar6 = &DAT_100a78030;
    FUN_1000ec890(&DAT_100a78030,PTR___s10Foundation4DateVSEAAMc_100996218);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (unaff_x20 + iVar2,&local_56,puVar3,uVar5,puVar6);
    (**(code **)(lVar8 + 8))(puVar7,puVar3);
  }
  else {
    (**(code **)(lVar8 + 8))(puVar7,puVar3);
  }
  return;
}

