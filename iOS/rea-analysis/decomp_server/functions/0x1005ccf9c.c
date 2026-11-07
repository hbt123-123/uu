// rea decompile_all
// name: FUN_1005ccf9c
// address: 0x1005ccf9c
// body: available
// range: 0x1005ccf9c-0x1005cd10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ccf9c(undefined8 *param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_a0 [16];
  long alStack_90 [2];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  
  puVar2 = &DAT_100aad5f8;
  FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar7 = auStack_70 + lVar1;
  lVar3 = 0;
  FUN_1005c8c98();
  FUN_1005c8dc8(param_3 + *(int *)(lVar3 + 0x28),puVar7);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar3 + -8);
  uVar5 = 1;
  puVar8 = puVar7;
  (**(code **)(lVar6 + 0x30))(puVar7,1,lVar3);
  if ((int)puVar8 == 1) {
    FUN_1005cdf54(puVar7);
    puVar8 = (undefined1 *)0x0;
    uVar5 = 0xe000000000000000;
  }
  else {
    __s10Foundation3URLV4pathSSvg();
    (**(code **)(lVar6 + 8))(puVar7,lVar3);
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)((long)alStack_90 + lVar1) = param_3;
  *(undefined8 *)((long)alStack_90 + lVar1 + 8) = param_2;
  auStack_80[lVar1] = param_4;
  *(undefined8 *)((long)&uStack_78 + lVar1) = param_5;
  pcVar4 = FUN_1005cdfbc;
  FUN_1005cad70(FUN_1005cdfbc,auStack_a0 + lVar1,puVar8,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  *param_1 = pcVar4;
  return;
}

