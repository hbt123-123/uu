// rea decompile_all
// name: FUN_10050fdcc
// address: 0x10050fdcc
// body: available
// range: 0x10050fdcc-0x10050ff0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10050fdcc(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar7 = *param_1;
  lVar4 = *(long *)(lVar7 + 0x50);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar6 = *(long *)(lVar1 + -8);
  lVar5 = (long)&local_80 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar7 + 0x58);
  (**(code **)(param_2 + 0x10))();
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = param_1[2];
    FUN_1003618e4(lVar2);
    if ((param_2 & 1) != 0) {
      FUN_1000b142c(*(long *)(lVar7 + 0x38) + lVar2 * 0x28,&local_80);
      goto LAB_10050fe70;
    }
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_10050fe70:
  _swift_bridgeObjectRelease(lVar7);
  puVar3 = &DAT_100aaa288;
  FUN_100004bb4(&DAT_100aaa288,&DAT_100836090);
  lVar7 = lVar5;
  _swift_dynamicCast(lVar5,&local_80,puVar3,lVar4,6);
  lVar2 = *(long *)(lVar4 + -8);
  (**(code **)(lVar2 + 0x38))(lVar5,(uint)lVar7 ^ 1,1,lVar4);
  lVar7 = lVar5;
  (**(code **)(lVar2 + 0x30))(lVar5,1,lVar4);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  return (int)lVar7 == 0;
}

