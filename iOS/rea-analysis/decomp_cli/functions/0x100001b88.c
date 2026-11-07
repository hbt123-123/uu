// rea decompile_all
// name: FUN_100001b88
// address: 0x100001b88
// body: available
// range: 0x100001b88-0x100001d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100001b88(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar1 = &DAT_100101b10;
  local_70 = param_3;
  uStack_68 = param_4;
  FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_70 - extraout_x8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_51 = param_2;
  FUN_1000133cc(param_1,lVar7,&DAT_100101b10,&DAT_1000cb700);
  lVar3 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_10001fc18(lVar7,&DAT_100101b10,&DAT_1000cb700);
    uVar4 = local_70;
    FUN_10000eb08(local_70,uStack_68);
    __ss22KeyedEncodingContainerV9encodeNil6forKeyyx_tKF(&local_51,uVar4);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar6,lVar7,lVar2);
    uVar4 = local_70;
    FUN_10000eb08(local_70,uStack_68);
    puVar1 = &DAT_100101a98;
    FUN_10000ec04(&DAT_100101a98,PTR___s10Foundation4DateVMa_1000f07d0,
                  PTR___s10Foundation4DateVSEAAMc_1000f07e0);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (lVar6,&local_51,uVar4,lVar2,puVar1);
    (**(code **)(lVar5 + 8))(lVar6,lVar2);
  }
  return;
}

