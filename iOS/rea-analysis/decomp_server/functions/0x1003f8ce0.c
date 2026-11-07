// rea decompile_all
// name: FUN_1003f8ce0
// address: 0x1003f8ce0
// body: available
// range: 0x1003f8ce0-0x1003f8fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003f8ec4) */
/* WARNING: Removing unreachable block (ram,0x0001003f8ec8) */

void FUN_1003f8ce0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long unaff_x21;
  undefined4 *puVar10;
  long lVar11;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar4 = &DAT_100a76718;
  local_88 = param_1;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a8de38;
  local_80 = (long)&local_90 - extraout_x8;
  FUN_100004bb4(&DAT_100a8de38,&DAT_100824598);
  lVar9 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = ((long)&local_90 - extraout_x8) - extraout_x8_00;
  lVar5 = 0;
  FUN_1003f84d4();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar10 = (undefined4 *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  *(undefined1 *)(puVar10 + 1) = 2;
  *puVar10 = 0x2020202;
  iVar3 = *(int *)(lVar5 + 0x24);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)puVar10 + (long)iVar3,1,1,lVar6);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003f9350();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar11,&DAT_1009bc240,&DAT_1009bc240,lVar5,uVar1,uVar2);
  puVar4 = local_78;
  lVar5 = local_80;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar7 = &local_51;
    local_90 = (long)iVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar7,local_78);
    *(char *)puVar10 = (char)puVar7;
    local_52 = 1;
    puVar7 = &local_52;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar7,puVar4);
    *(char *)((long)puVar10 + 1) = (char)puVar7;
    local_53 = 2;
    puVar7 = &local_53;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar7,puVar4);
    *(char *)((long)puVar10 + 2) = (char)puVar7;
    local_54 = 3;
    puVar7 = &local_54;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar7,puVar4);
    *(char *)((long)puVar10 + 3) = (char)puVar7;
    local_55 = 4;
    puVar7 = &local_55;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar7,puVar4);
    *(char *)(puVar10 + 1) = (char)puVar7;
    local_56 = 5;
    puVar8 = &DAT_100a78008;
    FUN_1000ec890(&DAT_100a78008,PTR___s10Foundation4DateVSeAAMc_100996228);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar5,lVar6,&local_56,puVar4,lVar6,puVar8);
    (**(code **)(lVar9 + 8))(lVar11,puVar4);
    FUN_1003f8694(lVar5,(long)puVar10 + local_90);
    FUN_1003f93cc(puVar10,local_88);
  }
  FUN_10003f094(param_2);
  FUN_1003f9390(puVar10);
  return;
}

