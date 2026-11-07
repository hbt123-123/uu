// rea decompile_all
// name: FUN_1001d0670
// address: 0x1001d0670
// body: available
// range: 0x1001d0670-0x1001d08df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001d07ec to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d0670(long param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  code *pcVar8;
  
  if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
    return;
  }
  if (0xe < param_3 >> 0x3c) goto joined_r0x0001001d0708;
  uVar1 = (uint)(param_3 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 == 0) {
      if ((param_3 & 0xff000000000000) != 0) goto joined_r0x0001001d06c0;
      goto LAB_1001d07f0;
    }
    if ((long)(int)param_2 == param_2 >> 0x20) goto joined_r0x0001001d0708;
  }
  else {
    if (uVar7 != 2) {
LAB_1001d07f0:
      FUN_100006cc8(param_2,param_3);
joined_r0x0001001d0708:
      if ((param_5 & 1) == 0) {
        lVar5 = 0;
        __s7Network7NWErrorOMa();
        (**(code **)(*(long *)(lVar5 + -8) + 0x30))(param_6,1,lVar5);
        if ((int)param_6 == 1) {
          puVar2 = &DAT_1009a33f8;
          _swift_allocObject(&DAT_1009a33f8,0x18,7);
          _swift_weakInit(puVar2 + 0x10,param_4);
          puVar3 = &DAT_1009a3498;
          _swift_allocObject(&DAT_1009a3498,0x18,7);
          _swift_weakInit(puVar3 + 0x10,param_1);
          puVar4 = &DAT_1009a3600;
          _swift_allocObject(&DAT_1009a3600,0x20,7);
          *(undefined **)(puVar4 + 0x10) = puVar2;
          *(undefined **)(puVar4 + 0x18) = puVar3;
          _swift_retain(puVar2);
          _swift_retain(puVar3);
          __s7Network12NWConnectionC7receive23minimumIncompleteLength07maximumF010completionySi_Siy10Foundation4DataVSg_AC14ContentContextCSgSbAA7NWErrorOSgtctF
                    (1,0x10000,thunk_FUN_1001d31e8,puVar4);
          _swift_release(puVar2);
          _swift_release(puVar3);
          _swift_release(puVar4);
          return;
        }
      }
      FUN_1001cd2ec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),1);
      return;
    }
    if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) goto joined_r0x0001001d0708;
  }
  FUN_10010bd10(param_2,param_3);
joined_r0x0001001d06c0:
  if ((param_5 & 1) == 0) {
    lVar5 = 0;
    __s7Network7NWErrorOMa();
    pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x30);
    uVar6 = param_6;
    (*pcVar8)(param_6,1,lVar5);
    FUN_1001d08e0(param_2,param_3,param_1,(int)uVar6 == 1);
    FUN_100006cc8(param_2,param_3);
    (*pcVar8)(param_6,1,lVar5);
    if ((int)param_6 == 1) {
      return;
    }
  }
  else {
    FUN_1001d08e0(param_2,param_3,param_1,0);
    FUN_100006cc8(param_2,param_3);
  }
  *(undefined1 *)(param_1 + 0x52) = 1;
  return;
}

