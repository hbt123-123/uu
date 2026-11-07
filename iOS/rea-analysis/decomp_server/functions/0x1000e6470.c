// rea decompile_all
// name: FUN_1000e6470
// address: 0x1000e6470
// body: available
// range: 0x1000e6470-0x1000e65d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e6470(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100a77e70;
  FUN_100004bb4(&DAT_100a77e70,&DAT_10080cca0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  puVar2 = auStack_68;
  _swift_beginAccess(param_2 + 0x20,puVar2,0x20,0);
  lVar5 = *(long *)(param_2 + 0x20);
  if ((*(long *)(lVar5 + 0x10) == 0) || (thunk_FUN_1001a2c34(param_3), ((ulong)puVar2 & 1) == 0)) {
    lVar5 = 0;
    FUN_1000e49dc();
    pcVar4 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x38);
    lVar5 = 0;
    FUN_1000e49dc();
    lVar8 = *(long *)(lVar5 + -8);
    FUN_100082394(lVar7 + *(long *)(lVar8 + 0x48) * param_3,puVar6,FUN_1000e49dc);
    pcVar4 = *(code **)(lVar8 + 0x38);
    uVar3 = 0;
  }
  (*pcVar4)(puVar6,uVar3,1,lVar5);
  _swift_endAccess(auStack_68);
  FUN_1000e49dc(0);
  puVar2 = puVar6;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(puVar6,1,lVar5);
  FUN_100040bb4(puVar6,&DAT_100a77e70,&DAT_10080cca0);
  *(bool *)param_1 = (int)puVar2 != 1;
  return;
}

