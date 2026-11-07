// rea decompile_all
// name: FUN_10033d7f0
// address: 0x10033d7f0
// body: available
// range: 0x10033d7f0-0x10033daa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10033d7f0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  lVar2 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar14 = *(long *)(lVar2 + -8);
  lVar10 = (long)&local_90 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82478;
  local_90 = lVar2;
  FUN_100004bb4(&DAT_100a82478,&DAT_100816c10);
  uVar12 = lVar10 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation8URLErrorVMa();
  lVar8 = *(long *)(lVar4 + -8);
  lVar11 = uVar12 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar13 = lVar11 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getErrorValue(param_1,auStack_68,local_80);
  FUN_100277a34(lVar13,uStack_78,local_70);
  lVar5 = 0;
  FUN_100277ad0();
  lVar2 = lVar13;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar13,1,lVar5);
  if ((int)lVar2 == 1) {
    FUN_100040bb4(lVar13,&DAT_100a82460,&DAT_1008175c0);
  }
  else {
    FUN_100278a38();
    FUN_10033fe40(lVar13);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      FUN_10033d7f0(lVar2);
      uVar9 = (uint)lVar4;
      _swift_errorRelease(lVar2);
      goto LAB_10033da6c;
    }
  }
  local_88 = param_1;
  _swift_errorRetain(param_1);
  puVar3 = &DAT_100a82488;
  FUN_100004bb4(&DAT_100a82488,&DAT_100816c20);
  uVar6 = uVar12;
  _swift_dynamicCast(uVar12,&local_88,puVar3,lVar4,6);
  if ((uVar6 & 1) == 0) {
    (**(code **)(lVar8 + 0x38))(uVar12,1,1,lVar4);
    FUN_100040bb4(uVar12,&DAT_100a82478,&DAT_100816c10);
    uVar9 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(uVar12,0,1,lVar4);
    (**(code **)(lVar8 + 0x20))(lVar11,uVar12,lVar4);
    if (DAT_100a81bb8 != -1) {
      _swift_once(&DAT_100a81bb8,FUN_10033d6ac);
    }
    uVar1 = DAT_100b365c0;
    puVar7 = &DAT_100a82490;
    FUN_100005c90(&DAT_100a82490,PTR___s10Foundation8URLErrorVMa_1009962f0,
                  PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_1009962e8);
    __s10Foundation21_BridgedStoredNSErrorPAAE4code4CodeQzvg(lVar10,lVar4,puVar7);
    lVar2 = lVar10;
    FUN_10034320c(lVar10,uVar1);
    uVar9 = (uint)lVar2;
    (**(code **)(lVar14 + 8))(lVar10,local_90);
    (**(code **)(lVar8 + 8))(lVar11,lVar4);
  }
LAB_10033da6c:
  return uVar9 & 1;
}

