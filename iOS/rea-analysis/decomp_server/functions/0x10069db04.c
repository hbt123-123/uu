// rea decompile_all
// name: FUN_10069db04
// address: 0x10069db04
// body: available
// range: 0x10069db04-0x10069dc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069dc8c to 0x1007ddde0 /usr/lib/libc++.1.dylib::std::string::operator= (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069db04(string *param_1)

{
  string sVar1;
  string *psVar2;
  string *psVar3;
  string *psVar4;
  string *psVar5;
  string *psVar6;
  string *unaff_x20;
  string *psVar7;
  void *local_60 [2];
  char local_49;
  
  psVar5 = *(string **)(param_1 + 0x18);
  psVar2 = *(string **)(param_1 + 0x20);
  sVar1 = psVar5[0x17];
  if ((long)(char)sVar1 < 0) {
    if (psVar2 != *(string **)(psVar5 + 8) || psVar2 < (string *)0x2) goto LAB_10069db78;
  }
  else if (psVar2 != (string *)(long)(char)sVar1 || psVar2 < (string *)0x2) goto LAB_10069db78;
  psVar4 = psVar2 + -1;
  psVar3 = psVar5;
  if ((char)sVar1 < '\0') {
    psVar3 = *(string **)psVar5;
  }
  if ((psVar3[(long)psVar4] == (string)0x2f) &&
     (psVar3 = psVar5, FUN_10069cedc(psVar5,psVar4), ((ulong)psVar3 & 1) == 0)) {
    *(string **)(param_1 + 0x20) = psVar4;
    FUN_10069cfb0();
    std::string::operator=(unaff_x20,param_1);
    return;
  }
LAB_10069db78:
  psVar3 = psVar5;
  FUN_10069caec(psVar5,psVar2);
  do {
    psVar4 = psVar2 + -1;
    if (psVar4 == (string *)0xffffffffffffffff) {
      psVar7 = (string *)0x0;
      break;
    }
    psVar7 = psVar3 + 1;
    if (psVar3 == psVar4) break;
    psVar6 = psVar5;
    if ((char)sVar1 < '\0') {
      psVar6 = *(string **)psVar5;
    }
    psVar7 = psVar2;
    psVar2 = psVar4;
  } while (psVar6[(long)psVar4] == (string)0x2f);
  psVar2 = psVar5;
  FUN_10069ccc0(psVar5,psVar7);
  *(string **)(param_1 + 0x20) = psVar2;
  std::string::string(psVar5,(string *)local_60,(ulong)psVar5,(ulong)psVar2,
                      (allocator *)(psVar7 + -(long)psVar2));
  std::string::operator=(psVar5,param_1);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if ((char)param_1[0x17] < '\0') {
    if (*(long *)(param_1 + 8) != 1) {
      return;
    }
    psVar5 = *(string **)param_1;
  }
  else {
    psVar5 = param_1;
    if (param_1[0x17] != (string)0x1) {
      return;
    }
  }
  if (*psVar5 == (string)0x2f) {
    std::string::assign((char *)param_1);
  }
  return;
}

